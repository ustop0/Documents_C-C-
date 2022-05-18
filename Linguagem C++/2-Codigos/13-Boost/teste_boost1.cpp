// teste1.cpp
#define BOOST_TEST_MODULE MeusTestes
#include <boost/test/included/unit_test.hpp>

BOOST_AUTO_TEST_CASE(primeiro_teste) {
  int i = 1;
  BOOST_TEST(i == 1); // Sucesso
  BOOST_TEST(i == 2); // Falha
}
