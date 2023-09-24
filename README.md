<<<<<<< HEAD
 	
<p># A-Smart-Parking-Lot
 <br>Implemented using Object Oriented Programming in C++
     <br> Set of requirements while designing the parking lot:
     <br>1/ The parking lot should have multiple floors where customers can park their cars.
     <br>2/ The parking lot should have multiple entry and exit points.
     <br>3/ Customers can collect a parking ticket from the entry points and can pay the parking fee at the exit points on their way out.
     <br>4/ Customers can pay the tickets at the automated exit panel or to the parking attendant.
    <br> 5/ Customers can pay via both cash and credit cards.
    <br> 6/ Customers should also be able to pay the parking fee at the customer’s info portal on each floor. If the customer has paid at the info portal, they don’t have to pay at the exit.
     <br>7/ The system should not allow more vehicles than the maximum capacity of the parking lot. If the parking is full, the system should be able to show a message at the entrance panel and on the      parking display board on the ground floor.
    <br> 8/ Each parking floor will have many parking spots. The system should support multiple types of parking spots such as Compact, Large, Handicapped, Motorcycle, etc.
     <br>9/ The Parking lot should have some parking spots specified for electric cars. These spots should have an electric panel through which customers can pay and charge their vehicles.
    <br> 10/The system should support parking for different types of vehicles like car, truck, van, motorcycle, etc.
     <br>11/ Each parking floor should have a display board showing any free parking spot for each spot type.
     <br>12/ The system should support a per-hour parking fee model. For example, customers have to pay $4 for the first hour, $3.5 for the second and third hours, and $2.5 for all the remaining hours. 
=======
# A-Smart-Parking-Lot-
Implemented using Object Oriented Programming in C++ and QT for GUI <br />
---
<img width="1037" alt="Screenshot 2023-09-22 185338" src="https://github.com/WGenerato/A-Smart-Parking-Lot-/assets/105020983/841d2209-7e7f-4dd8-bacb-73e10431e62b"> 
The main window after running the application. <br />
---
<img width="1027" alt="Screenshot 2023-09-23 183103" src="https://github.com/WGenerato/A-Smart-Parking-Lot-/assets/105020983/edb7be87-f901-4915-a932-a277d3c50cf9">
When "Initiate Entrance" is clicked, a window with a number dial will appear and prompt the user to enter the time their vehicle will be parked. <br />
---
<img width="1024" alt="Screenshot 2023-09-23 183147" src="https://github.com/WGenerato/A-Smart-Parking-Lot-/assets/105020983/e4835e40-7b90-4600-adf1-092c6e57f7eb">
The dial changes the value each time by 1. The chosen time interval here is 5 hours. <br />
---
<img width="1033" alt="Screenshot 2023-09-23 183350" src="https://github.com/WGenerato/A-Smart-Parking-Lot-/assets/105020983/659ba71c-26ed-4392-b5fa-764e891f86ec">
The customer will then be asked wether they want to charge their EV or not. <br />
---
<img width="1030" alt="Screenshot 2023-09-23 224041" src="https://github.com/WGenerato/A-Smart-Parking-Lot-/assets/105020983/49e2e7e9-9705-4d83-bdb4-02b178f02f89">
If "No" is chosen, the following window is shown. <br />
---
<img width="1025" alt="Screenshot 2023-09-23 183414" src="https://github.com/WGenerato/A-Smart-Parking-Lot-/assets/105020983/f497510f-b4ef-4554-a250-941eac2a3288">
If "Yes" is chosen, a new window will appear. Similar to parking time, charging time can also be manually entered by user or by using a dial. Unlike the charging time, this dial changes its value by 0.5, which is equals to half an hour for each spin. <br />
---
<img width="1034" alt="Screenshot 2023-09-23 183437" src="https://github.com/WGenerato/A-Smart-Parking-Lot-/assets/105020983/06b64600-eb4e-43aa-a14e-3de8e6519f22">
The chosen charging time for this example is 4 hours and a half. <br />
---
<img width="1027" alt="Screenshot 2023-09-23 183203" src="https://github.com/WGenerato/A-Smart-Parking-Lot-/assets/105020983/2fb7c9e3-8549-4474-a8c5-054ebbddd818">
After confirming the times, a ticket with a unique number will be issued. <br />
---
<img width="1028" alt="Screenshot 2023-09-23 183234" src="https://github.com/WGenerato/A-Smart-Parking-Lot-/assets/105020983/678b69a8-8ca2-411a-ab13-05be07c8770d">
A list of avalaible parking spots of multiple types will be displayed. <br />
---
<img width="1027" alt="Screenshot 2023-09-23 183253" src="https://github.com/WGenerato/A-Smart-Parking-Lot-/assets/105020983/a6fb26f8-39f0-4205-9305-af640e0ef525">
The list continues.  <br />
---
<img width="1028" alt="Screenshot 2023-09-23 183327" src="https://github.com/WGenerato/A-Smart-Parking-Lot-/assets/105020983/5227f73e-8e4a-4e16-ad72-0fff684e8268">
When "Initiate Exit" is clicked, the price for the ticket according the hours entered will be computed and returned to the customers. <br />
---

<img width="1030" alt="Screenshot 2023-09-23 183509" src="https://github.com/WGenerato/A-Smart-Parking-Lot-/assets/105020983/3230d7ac-71e3-4a82-85c4-e14a35c20c70">
If the customer chose to charge their EV, the charging fee will also be presented to them at the end. <br />
>>>>>>> a8d5687e964e2a87b004b8d2551ba3b615706438
