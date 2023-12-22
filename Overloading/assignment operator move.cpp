#include <iostream>
#include <cstring>

class String {
private:
    char* m_data;

public:
    String() : m_data(nullptr) {}

    String(const char* data) {
        size_t size = std::strlen(data) + 1;
        m_data = new char[size];
        std::memcpy(m_data, data, size);
    }

    String(const String& other) {
        size_t size = std::strlen(other.m_data) + 1;
        m_data = new char[size];
        std::memcpy(m_data, other.m_data, size);
    }

    String(String&& other) noexcept {
        m_data = other.m_data;
        other.m_data = nullptr;
    }

    String& operator=(const String& other) {
        if (this != &other) {
            delete[] m_data;
            size_t size = std::strlen(other.m_data) + 1;
            m_data = new char[size];
            std::memcpy(m_data, other.m_data, size);
        }
        return *this;
    }

    String& operator=(String&& other) noexcept {
        if (this != &other) {
            delete[] m_data;
            m_data = other.m_data;
            other.m_data = nullptr;
        }
        return *this;
    }

    const char* getData() const {
        return m_data;
    }

    ~String() {
        delete[] m_data;
    }
};

int main() {
    String str1 = "Hello";

    String str2 = std::move(str1);

    String str3; 
    str3 = str2;

    String str4;
    str4 = std::move(str3);

    std::cout << "str1: " << str1.getData() << std::endl;
    std::cout << "str2: " << str2.getData() << std::endl;
    std::cout << "str3: " << str3.getData() << std::endl;
    std::cout << "str4: " << str4.getData() << std::endl;

    return 0;
}