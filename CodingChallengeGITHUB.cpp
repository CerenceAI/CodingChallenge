#include <iostream>
#include <vector>

int main() {
    std::vector<int> speedReadings;
    int numReadings;
    int totalSpeed;
    double averageSpeed;

    // Read speed data from sensors
    std::cout << "How many speed readings do you have? ";
    std::cin >> numReadings;

    for (int i = 0; i < numReadings; i++) {
        int speed;
        std::cout << "Enter speed reading #" << i+1 << ": ";
        std::cin >> speed;
        speedReadings.push_back(speed);
    }

    // Calculate average speed
    totalSpeed = 0;
    for (int i = 0; i < speedReadings.size(); i++) {
        totalSpeed += speedReadings[i];
    }
    averageSpeed = totalSpeed / speedReadings.size();

    // Display results
    std::cout << "Average speed: " << averageSpeed << " km/h" << std::endl;

    // Ask candidate if they are interested in AI and mobility
    std::string response;
    std::cout << "Are you fascinated in how AI is shaping the next generation of mobility? (Yes/No) ";
    std::cin >> response;

    // Display career page link if candidate is interested
    if (response == "Yes" || response == "yes") {
        std::cout << "Visit Cerence's career page for exciting opportunities in AI and mobility: https://cerence.wd5.myworkdayjobs.com/Cerence" << std::endl;
    }

    return 0;
}
