# include <DHT.h>

# define DHTPIN 2
# define DHTTYPE DHT11
DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);
  dht.begin();
}

void loop() {
  delay(2000);
  int humidity = dht.readHumidity(); // 20~90 %RH
  int temperature = dht.readTemperature(); // 0~50 Celsius
  Serial.print("Humidity: ");
  Serial.print(humidity);
  Serial.println(" %RH");
  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.println(" Celsius");
}
