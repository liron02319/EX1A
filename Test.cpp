
#include "doctest.h"
#include "PhoneticFinder.hpp"
#include <string>
#include <iostream>

using namespace phonetic;
using namespace std;


TEST_CASE("Test replacement of p and b") {
    string text = "xxx happy yyy";
    CHECK(find(text, "happy") == string("happy"));
    CHECK(find(text, "habby") == string("happy"));
    CHECK(find(text, "hapby") == string("happy"));
    CHECK(find(text, "habpy") == string("happy"));
    CHECK(find(text, "iii") == string("yyy"));
    string text1 = "xxxx z sss";
    CHECK(find(text1, "s") == string("z"));
    CHECK(find(text1, "zzz") == string("sss"));

}

TEST_CASE("Test replacement of g and j") {
    string text1 = "good jump game jjj ggg";
    CHECK(find(text1, "jood") == string("good"));
    CHECK(find(text1, "jame") == string("game"));
    CHECK(find(text1, "good") == string("good"));
    CHECK(find(text1, "jump") == string("jump"));
    CHECK(find(text1, "gump") == string("jump"));
    CHECK(find(text1, "jjj") == string("ggg"));
    CHECK(find(text1, "jjj") == string("jjj"));
    CHECK(find(text1, "ggg") == string("ggg"));
    CHECK(find(text1, "ggg") == string("jjj"));

}






TEST_CASE("Test replacement of d and t") {
    string text3 = "dog dig temp dear tear ddd ttt";
    CHECK(find(text3, "dog") == string("dog"));
    CHECK(find(text3, "tog") == string("dog"));
    CHECK(find(text3, "dig") == string("dig"));
    CHECK(find(text3, "tig") == string("dig"));
    CHECK(find(text3, "temp") == string("temp"));
   CHECK(find(text3, "demp") == string("temp"));
 CHECK(find(text3, "dear") == string("dear"));
 CHECK(find(text3, "tear") == string("dear"));
 CHECK(find(text3, "tear") == string("tear"));
 CHECK(find(text3, "dear") == string("tear"));
 CHECK(find(text3, "ddd") == string("ddd"));
 CHECK(find(text3, "ddd") == string("ttt"));
  CHECK(find(text3, "ttt") == string("ttt"));
CHECK(find(text3, "ttt") == string("ddd"));

}




TEST_CASE("Test replacement of p and b") {
    string text4 = "xxx happy yyy";
    CHECK(find(text4, "happy") == string("happy"));
    CHECK(find(text4, "habby") == string("happy"));
    CHECK(find(text4, "hapby") == string("happy"));
    CHECK(find(text4, "habpy") == string("happy"));
    CHECK(find(text4, "iii") == string("yyy"));
    string text5 = "xxxx z sss";
    CHECK(find(text5, "s") == string("z"));
    CHECK(find(text5, "zzz") == string("sss"));

}


TEST_CASE("Test replacement of p and b") {
    string text6 = "xxx happy yyy";
    CHECK(find(text6, "happy") == string("happy"));
    CHECK(find(text6, "habby") == string("happy"));
    CHECK(find(text6, "hapby") == string("happy"));
    CHECK(find(text6, "habpy") == string("happy"));
    CHECK(find(text6, "iii") == string("yyy"));
    string text7 = "xxxx z sss";
    CHECK(find(text7, "s") == string("z"));
    CHECK(find(text7, "zzz") == string("sss"));

}


TEST_CASE("space on text")
{
    string text8 = "          israel          ";
    CHECK(find(text8, "israel") == string("israel"));
  
    string text9 = "          israel";
    CHECK(find(text9, "israel") == string("israel"));
    string text10 = "israel ";
    CHECK(find(text10, "israel") == string("israel"));
    string text11 = "          israel          ";
    CHECK(find(text11, "israel") == string("israel"));
    string text12 = "israel          ";
    CHECK(find(text12, "israel") == string("israel")); 
    string text13 = " israel";
    CHECK(find(text13, "israel") == string("israel"));
 string text14 = " israel ";
    CHECK(find(text14, "israel") == string("israel"));
    
}



TEST_CASE("did not found on the text throw")
{
    string text15 = "we need to fix immediately please";
    CHECK_THROWS(find(text15, "v"));
    CHECK_THROWS(find(text15, "fi"));
    CHECK_THROWS(find(text15, "plea"));
    CHECK_THROWS(find(text15, "pleas"));
    CHECK_THROWS(find(text15, "ne"));
    CHECK_THROWS(find(text15, "nee"));
    CHECK_THROWS(find(text15, "immed"));
    CHECK_THROWS(find(text15, "immedi"));
    CHECK_THROWS(find(text15, "immedia"));
    CHECK_THROWS(find(text15, "immediat"));
    CHECK_THROWS(find(text15, "immediatl"));
    CHECK_THROWS(find(text15, "immediatel"));

}


TEST_CASE("Test replacement of lower-case and upper-case") {
    string text16 = "Happi xxx yyy";
    CHECK(find(text16, "happi") == string("Happi"));
    CHECK(find(text16, "Happi") == string("Happi"));
    CHECK(find(text16, "HAPPI") == string("Happi"));
    CHECK(find(text16, "HaPpI") == string("Happi"));
  CHECK(find(text16, "YYY") == string("yyy"));
  CHECK(find(text16, "YyY") == string("yyy"));
  CHECK(find(text16, "yYy") == string("iii"));


}



TEST_CASE("Test replacement of s and z") {
    string text17 = "sss zzz super zoom Sup Zone";
    CHECK(find(text17, "sss") == string("sss"));
    CHECK(find(text17, "zzz") == string("sss"));
    CHECK(find(text17, "zzz") == string("zzz"));
    CHECK(find(text17, "sss") == string("zzz"));
    CHECK(find(text17, "zuper") == string("super"));
    CHECK(find(text17, "sup") == string("Sup"));
    CHECK(find(text17, "Sup") == string("Sup"));
     CHECK(find(text17, "Zone") == string("Zone"));
    CHECK(find(text17, "zone") == string("Zone"));
 CHECK(find(text17, "zoom") == string("zoom"));
 CHECK(find(text17, "Zoom") == string("zoom"));
 CHECK(find(text17, "soom") == string("zoom"));
}



TEST_CASE("Test replacement of v and w") {
    string text18 = "view warning woom";
    CHECK(find(text18, "view") == string("view"));
    CHECK(find(text18, "wiew") == string("view"));
    CHECK(find(text18, "warning") == string("warning"));
    CHECK(find(text18, "varning") == string("warning"));
    CHECK(find(text18, "woom") == string("woom"));
    CHECK(find(text18, "voom") == string("woom"));


}









