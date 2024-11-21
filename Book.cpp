#include "Book.hpp"

int Book::count = 0;

Book::Book(const std::string& title, const std::string& author, const std::string& additionalInfo)
    : title(title), author(author), info(additionalInfo), id(++count) {}

std::string Book::getTitle() const {
    return title;
}
std::string Book::getAuthor() const {
    return author;
}
std::string Book::getInfo() const {
    return info;
}
int Book::getID() const {
    return id;
}

void Book::setTitle(const std::string& title) {
    this->title = title;
}
void Book::setAuthor(const std::string& author) {
    this->author = author;
}
void Book::setInfo(const std::string& info) {
    this->info = info;
}

void Book::addInfo(const std::string& newInfo) {
    if (!info.empty()) {
        info += " "; // Добавление пробела, перед тем как вставить новую инфу
    }
    info += newInfo;
}