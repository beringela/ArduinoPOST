Client client("https://beringela.pythonanywhere.com", 80);

String PostData = "{\"date\": \"2020-01-01T00:00:00\", \"degrees\": 36, \"patient\": \"12345678900\"}";

if (client.connect()) {
    client.println("POST /temperature/ HTTP/1.1");
    client.println("Host: 179.105.46.178");  // melhor colocar a variável com seu ip, já que ele pode mudar
    client.println("User-Agent: Arduino/1.0");  // mude o agente
    client.println("Connection: close");
    client.print("Content-Length: ");
    client.println(PostData.length());
    client.println();
    client.println(PostData);
}
