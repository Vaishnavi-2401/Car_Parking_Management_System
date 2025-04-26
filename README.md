# 🚗 Car Parking Management System

## 📌 Overview
The **Car Parking Management System** is a simple parking lot simulation project written in **C**.  
It allows users to **park**, **remove**, and **view** cars based on their number plates within a fixed parking capacity.

---

## ✨ Features

### 1. Park a Car
- Adds a new car number plate if space is available
- Prevents over-parking by checking the maximum limit
- Handles invalid inputs (e.g., full parking)

### 2. Remove a Car
- Removes a car based on its number plate
- Shifts remaining entries automatically to maintain order
- Displays appropriate message if car not found

### 3. View Parked Cars
- Displays the list of all currently parked cars
- Shows a message if no cars are parked

---

## 🛠️ Technologies Used
- **C Language** – Core programming logic  
- **GCC Compiler** – For compiling and running the program  
- **CLI** – Console-based user interface  

---

## ⚙️ How It Works

### 1. Main Menu Options:
1. Park a Car

2. Remove a Car

3. View Parked Cars

4. Exit

### 2. Park a Car:
- User enters the car's number plate  
- Adds it to the parking list if space is available  
- Displays a success or error message  

### 3. Remove a Car:
- User enters the number plate to remove  
- Removes the car and shifts others up  
- Displays success or car-not-found message  

### 4. View Parked Cars:
- Lists all currently parked cars  
- Shows appropriate message if no cars are present  

### 5. Exit:
- Terminates the program  

---

## 🚀 How to Run the Program

### 🔹 Clone or Download the Repository  
```bash
git clone https://github.com/Vaishnavi-2401/Car_Parking_Management_System.git
```

### 🔹 Compile the Code  
```bash
gcc parking_management_system.c -o parking_management_system
```

### 🔹 Run the Program  
```bash
./parking_management_system
```

## 🎯 Future Improvements

- 🔒 Add support to check for duplicate number plates before parking
- 💾 Implement file storage to save parking records persistently
- 🧠 Optimize using linked lists or dynamic memory allocation
- 🖼️ Add a Graphical User Interface (GUI) using C++ or frontend frameworks
- 📱 Integrate with a mobile app for remote parking management
