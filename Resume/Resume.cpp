#include <iostream>
using namespace std; 

int main()
{
    std::string skills;
    std::string Programming = "Python, C++, Basic Scripting (CMD), linux terminal, some SQL, LaTeX, HTML, Some Basic Assembly Language.";
    std::string Network = "Experience with Wireshark, Packet sniffing, Network spoofing, AWS.";
    std::string Software = "Linux OS (Mint, Kali), Word, Excel, Powerpoint, Wireshark, nmap, virtual machines, Visual Studio, Windows 7 ‑ 11 OS";
    std::string Certifications = "Cybersecurity";

    std::cout << "Hello! What skills would you like to view on my resume?\n";
    std::cout << "The options are: Programming, Network, Software,\n" << "Certifications, Currently working on (CWO)\n";
    
    short x = 0;
    while (x<4) {
        std::cin >> skills;
        if (skills == "Programming") {
            std::cout << Programming;
            std::cout << "\n";
        }
        
        if (skills == "Network") {
            std::cout << Network;
            std::cout << "\n";
        }
        
        if (skills == "Software") {
            std::cout << Software;
            std::cout << "\n";
        }
        
        if (skills == "Certifications") {
            std::cout << Certifications;
            std::cout << "\n";
        }
        else {
            std::cout << "Invalid response. Try again.\n";
        }
        x++;
        
    }
        return 0;
    
}

