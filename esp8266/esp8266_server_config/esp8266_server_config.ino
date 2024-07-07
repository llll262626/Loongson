#include <ESP8266WiFi.h>  

IPAddress local_IP(192, 168, 4, 1);  
IPAddress gateway(192, 168, 4, 1);  
IPAddress subnet(255, 255, 255, 0);  
const char* ssid = "SoftAP001";
const char* password = "12345678910";

#define MAX_SRV_CLIENTS 3

WiFiClient serverClients[MAX_SRV_CLIENTS];   //定义最多多少个client可以连接本server(一般不要超过4个)
WiFiServer server(local_IP,8080);

void setup() {  
  // put your setup code here, to run once:  
  Serial.begin(115200);  
  WiFi.mode(WIFI_AP);
  WiFi.softAPConfig(local_IP, gateway, subnet);  
  WiFi.softAP(ssid, password);

  Serial.print("\r\nWiFi SSID:  ");  
  Serial.println("SoftAP001");
  Serial.print("Password:   ");
  Serial.println(WiFi.softAPPSK());
  Serial.print("IP:         ");  
  Serial.println(WiFi.softAPIP());  
  
  server.begin();              //启动服务器
  server.setNoDelay(true);     //关闭小包合并包功能，不会延时发送数据
  Serial.println("\r\nServer is ready.");
  Serial.print("IP:   ");
  Serial.println(local_IP);
  Serial.println("Port: 8080\r\n");
}  

uint8_t num = 0;
uint32_t wait_time = 0;
uint32_t check_bj1 = 0x44444;
uint16_t check_bj2 = 0x1FFFF;
const char str1[] = "11";
const char str2[] = "22";
const char str3[] = "33";
char buf1[3];
uint8_t clients_ID[MAX_SRV_CLIENTS];
uint8_t i,j;

void Check_alarm(uint8_t number)
{
  if (Serial.available()) {
    //把串口调试器发过来的数据 发送给client
    size_t len = Serial.available();  //返回可读数据的长度
    uint8_t sbuf[len];
    Serial.readBytes(sbuf, len);
    //push UART data to all connected telnet clients
    for (i = 0; i < number; i++) {
      if (serverClients[i] && serverClients[i].connected()) {
        serverClients[i].write(sbuf, len);//向客户端发送数据
        delay(1);
      }
    }
  }
}


void loop() {  
  // put your main code here, to run repeatedly:  
  
  if (server.hasClient()) {  //判断是否有新的client请求进来
    for (i = 0; i < MAX_SRV_CLIENTS; i++) {
      //释放旧无效或者断开的client
      if (!serverClients[i] || !serverClients[i].connected()) {
        serverClients[i].stop();  //停止指定客户端的连接
        serverClients[i] = server.available();//分配最新的client
        if(++num == 4){
          num = 3;
        }

        while (!serverClients[i].available());
        clients_ID[i] = serverClients[i].read();  //分配ID

        Serial.print("A new client: "); 
        Serial.println(i);
        Serial.print("ID:           ");
        Serial.println(clients_ID[i]);

        break; //跳出一层for循环
      }
    }
    
    //当达到最大连接数 无法释放无效的client，需要拒绝连接
    if (i == MAX_SRV_CLIENTS) {
      WiFiClient client = server.available();
      client.stop();
      Serial.println("Connection is refused.");
    }
  }

  for(j = 0; j< num; j++){
    if(serverClients[j] && serverClients[j].connected()){
      while(--check_bj2){
        Check_alarm(num);
      }
      check_bj2 = 0x1FFFF;

      if(clients_ID[j] == 'a'){
        strcpy(buf1,str1);
      }else if(clients_ID[j] == 'b'){
        strcpy(buf1,str2);
      }else if(clients_ID[j] == 'c'){
        strcpy(buf1,str3);
      }
      serverClients[j].write(buf1, 2);//向指定客户端发送命令

      while (!serverClients[j].available()) { //等待指定客户端发送数据
        if(++wait_time >= 0xFFFFF){ //超时
          break;
        }
      }
      if(wait_time < 0xFFFFF){
        while (serverClients[j].available()){
          Serial.write(serverClients[j].read());
        }
      }else{
        Serial.println("Time is out.");
      }
    }
    wait_time = 0;
  }

  while(--check_bj1){
    Check_alarm(num);
  }
  check_bj1 = 0x44444;

  // //检测client发过来的数据，并发送到串口
  // for (i = 0; i < MAX_SRV_CLIENTS; i++) {
  //   if (serverClients[i] && serverClients[i].connected()) {
  //     if (serverClients[i].available()) {
  //       //serverClients[i].available()   判断指定客户端是否有可读数据
  //       while (serverClients[i].available()) {
  //         Serial.write(serverClients[i].read());
  //       }
  //     }
  //   }
  // }
}