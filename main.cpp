#include <iostream>
#include <string>

int main() {
    std::string input;
    while (std::getline(std::cin, input)) {  // �� stdin ��ȡ����
        if (input == "���") {
            std::cout << "{\"reply\":\"��Ҳ��ѽ\",\"audioFile\":\"hit.wav\"}" << std::endl;
        }
        else {
            std::cout << "{\"reply\":\"���յ���: " << input << "\"}" << std::endl;
        }
    }
    return 0;
}