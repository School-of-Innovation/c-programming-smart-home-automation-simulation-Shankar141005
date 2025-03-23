/*
 * 🚨 WARNING: CHALLENGE MODE ACTIVATED 🚨
 * 
 * 1️⃣ Sit back, take a deep breath, and **THINK**.
 * 2️⃣ For the next **10 minutes**, avoid using **Gen AI, ChatGPT, or any shortcuts**.
 * 3️⃣ Trust your **brain**—you’re smarter than you think!
 * 4️⃣ Consider yourself a **LOSER** if you cheat. Seriously, promise yourself you won't. 😤
 * 5️⃣ If you solve it on your own, **you WIN** and level up as a true programmer and come and meet me ! 
 * 
 * 
 * 💡 Remember: The best coders aren’t the ones who copy-paste. They are the ones who **struggle, think, fail, and then succeed.** 
 *    
 * Now, write your code! You got this! 💪🔥
 */

#include <stdio.h>

#define MAX_ROOMS 5  //  max number of rooms

// Function prototypes
void initializeSystem();
void displayMenu();
void controlLights();
void readtemperatureerature();
void detectMotion();
void securitySystem();
void analyzeHouseStatus();

int main() {
    int rooms,choice;
    printf("Ener the Number of Rooms: ");
    scanf("%d",rooms);
    int light[rooms],temperatureerature[rooms], motion[rooms],lock[rooms];
    if (rooms>MAX_ROOMS || rooms<1){
       printf("Invalid nunmber of rooms"); 
    }
    initializeSystem(rooms,light,temperatureerature,motion,lock);
    do{
        displayMenu();
        printf("Enter your Choice: ");
        scanf("%d",choice);
        switch (choice) 
        {
            case 1:
            void controlLight(rooms,light);
            break;
            case 2:
            void readtemperatureerature(rooms,temperatureerature);
            break;
            case 3:
            void detectMotion(rooms,motion);
            break;
            case 4:
            void securitySystem(rooms,lock);
            break;
            case 5:
            void analyzeHouseStatus(rooms,light,temperatureerature,motion,lock);
            break;
            case 6:
                printf("Exiting System.... Thank You...");
            default:
                printf("Invalid Choice!");
    
        }

              
    }while(choice!=6);


    
    

    return 0;
}

 
void initializeSystem(int rooms, int light[],int temperatureerature[],int motion[], int lock[]) {
    printf("Initializing System...");
    for(int i=0;i<rooms; i++){
        light[i]=0;
        temperatureerature[i]=23+i;
        motion[i]=0;
        lock[i]=1;
    }
    printf("System Initialized");

  
}

void displayMenu() {
    printf("\n**** Smart Home Menu****\n");
    printf("1. Toggle Light\n");
    printf("2. Read temperatureerature\n");
    printf("3. Check Motion Sensor\n");
    printf("4. Lock/Unlock Security System\n");
    printf("5. House Status Summary\n");
    printf("6.Exit\n");

   
}
void controlLights(int rooms, int light[]) {
    int t_room;
     printf("Enter room number to toggle light (1-%d): ", rooms);
     scanf("%d", &t_room);
 
     if (t_room < 1 || t_room > rooms) {
         printf("Invalid room number.\n");
         return;
     }
 
     light[t_room - 1] = ! light[t_room - 1];
     printf("Light in Room %d is now %s.\n", t_room, light[t_room - 1] ? "ON" : "OFF");

    
    

}
void readtemperatureerature(int rooms, int temperature[]) {
    int t_room;
     printf("Enter room number to read temperatureerature (1-%d): ", rooms);
     scanf("%d", &t_room);
 
     if (t_room < 1 || t_room > rooms) {
         printf("Invalid room number.\n");
         return;
     }
 
     printf("temperatureerature in Room %d: %d°C\n", t_room, temperature[t_room - 1]);
     if (temperature[t_room - 1] > 30) {
         printf("Warning!!: temperatureerature in Room %d is above 30°C!\n", t_room);
     }
}
void detectMotion(int rooms, int motion[]) {
    int t_room;
     printf("Enter room number to check motion sensor (1-%d): ", rooms);
     scanf("%d", &t_room);
 
     if (t_room < 1 || t_room > rooms) {
         printf("Invalid room number.\n");
         return;
     }
 
     printf("Motion in Room %d: %s\n", rooms, motion[rooms - 1] ? "Detected" : "No Motion");


}
void securitySystem(int rooms, int lock[]) {
    int t_room;
     printf("Enter room number to lock/unlock (1-%d): ", rooms);
     scanf("%d", &t_room);
 
     if (t_room < 1 || t_room > rooms) {
         printf("Invalid room number.\n");
         return;
     }
 
     lock[t_room - 1] = !lock[t_room - 1];
     printf("Room %d is now %s.\n", t_room, lock[t_room - 1] ? "Locked" : "Unlocked");


}
void analyzeHouseStatus(int rooms, int light[], int temperatureq[], int motion[],int lock[]) {
    printf("\nHouse Status:\n");
    for (int i = 0; i < rooms; i++) {
        printf("- Room %d: Light %s, temperature %d°C, %s, %s\n", );
            i + 1, 
            light[i] ? "ON" : "OFF", 
            temperature[i]; 
            motion[i] ? "Motion Detected" : "No Motion", 
            lock[i] ? "Locked" : "Unlocke",
    }
}
