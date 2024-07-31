#include <cstdint>
#include <fmt/core.h>
#include <fmt/format.h>
#include <iostream>

using fmt::format;
using std::cout;
using std::endl;

struct LibraryCatalogCard {
  const char *title{};
  const char *author{};
  const char *publisher{};
  const char *subject{};
  const char *ISBN{};
  const char *OCLC{};
  double deweyDecimal{};
  int yearPublished{};
  int yearAcquired{};
  int quantityInStock{};
};

int main(int argc, char **argv) {
  LibraryCatalogCard card1 = {
      "Jack Reacher",
      "Jim Grant a.k.a Lee Child",
      "Independent",
      "The book series chronicles the adventures of Jack Reacher, a former",
      "0-515-12344-7",
      "N/A",
      345.87,
      1997,
      1998,
      29};

  auto *card = &card1;

  cout << "Displaying book info." << endl;
  cout << format("Title: {}", card->title) << endl;
  cout << format("Author: {}", card->author) << endl;
  cout << format("Publisher: {}", card->publisher) << endl;
  cout << format("Subject: {}", card->subject) << endl;
  cout << format("ISBN: {}", card->ISBN) << endl;
  cout << format("OCLC: {}", card->OCLC) << endl;
  cout << format("Dewey Decimal: {}", card->deweyDecimal) << endl;
  cout << format("Year Published: {}", card->yearPublished) << endl;
  cout << format("Year Acquired: {}", card->yearAcquired) << endl;
}