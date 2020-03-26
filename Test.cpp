
#include "doctest.h"
#include "PhoneticFinder.hpp"
#include <string>
#include <iostream>

using namespace phonetic;
using namespace std;




TEST_CASE("Test replacement of g and j") {
    string text1 = "good jump game jjj ggg";
    CHECK(find(text1, "good") == string("good"));
    CHECK(find(text1, "jood") == string("good"));
    CHECK(find(text1, "jump") == string("jump"));
    CHECK(find(text1, "gump") == string("jump"));
    CHECK(find(text1, "game") == string("game"));
    CHECK(find(text1, "jame") == string("game"));
    CHECK(find(text1, "jjj") == string("ggg"));
    CHECK(find(text1, "jjj") == string("jjj"));
    CHECK(find(text1, "ggg") == string("ggg"));
    CHECK(find(text1, "ggg") == string("jjj"));

}


TEST_CASE("Test replacement of p and b") {
    string text = "xxx happy yyy";
    CHECK(find(text, "happy") == string("happy"));
    CHECK(find(text, "habby") == string("happy"));
    CHECK(find(text, "hapby") == string("happy"));
    CHECK(find(text, "habpy") == string("happy"));
       string text2 = "yy people";
    CHECK(find(text2, "people") == string("people"));
    CHECK(find(text2, "beople") == string("people"));
    CHECK(find(text2, "peoble") == string("people"));
    CHECK(find(text2, "beoble") == string("people"));
    
       

 

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





TEST_CASE("space on text")
{
    string text8 = "         israel         ";
    CHECK(find(text8, "israel") == string("israel"));
  
    string text9 = "          israel";
    CHECK(find(text9, "israel") == string("israel"));

    string text10 = "israel ";
    CHECK(find(text10, "israel") == string("israel"));

    string text11 = "   israel   ";
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
  CHECK(find(text16, "yYy") == string("yyy"));


}



TEST_CASE("Test replacement of s and z") {
    string text17 = "sss zzz super zoom sup zone";
    CHECK(find(text17, "zzz") == string("sss"));
    CHECK(find(text17, "sss") == string("zzz"));
    CHECK(find(text17, "zuper") == string("super"));
    CHECK(find(text17, "zup") == string("sup"));
     CHECK(find(text17, "sone") == string("zone"));
 CHECK(find(text17, "soom") == string("zoom"));
}



TEST_CASE("Test replacement of v and w") {
    string text18 = "view warning woom";
    CHECK(find(text18, "view") == string("view"));
    CHECK(find(text18, "wiew") == string("view"));
    CHECK(find(text18, "wiev") == string("view"));
    CHECK(find(text18, "warning") == string("warning"));
    CHECK(find(text18, "varning") == string("warning"));
    CHECK(find(text18, "voom") == string("woom"));


}


TEST_CASE("Test replacement of k and c") {
    string text = "xx hakky yy";
    CHECK(find(text, "haccy") == string("hakky"));
    CHECK(find(text, "hacky") == string("hakky"));
    CHECK(find(text, "hakcy") == string("hakky"));
    CHECK(find(text, "hakky") == string("hakky"));
    string text1 = "hakky xx yy";
    CHECK(find(text, "haccy") == string("hakky"));
    CHECK(find(text, "hacky") == string("hakky"));
    CHECK(find(text, "hakcy") == string("hakky"));
    CHECK(find(text, "hakky") == string("hakky"));
    string text2 = "xx yy hakky";
   CHECK(find(text, "haccy") == string("hakky"));
    CHECK(find(text, "hacky") == string("hakky"));
    CHECK(find(text, "hakcy") == string("hakky"));
    CHECK(find(text, "hakky") == string("hakky"));
    
    string text3 = "cola is kill";
CHECK(find(text, "kola") == string("cola"));
CHECK(find(text, "cola") == string("cola"));
CHECK(find(text, "kill") == string("kill"));
CHECK(find(text, "cill") == string("kill"));
   string text4 = "kind camp come ";
CHECK(find(text, "kind") == string("kind"));
CHECK(find(text, "cind") == string("kind"));
CHECK(find(text, "camp") == string("camp"));
CHECK(find(text, "kamp") == string("camp"));
CHECK(find(text, "come") == string("come"));
CHECK(find(text, "kome") == string("come"));
   string text5 = "carolina corona ";
CHECK(find(text, "carolina") == string("carolina"));
CHECK(find(text, "karolina") == string("carolina"));
CHECK(find(text, "corona") == string("corona"));
CHECK(find(text, "korona") == string("corona"));


}



TEST_CASE("Test replacement of o and u") {
    string text18 = "oops omg uncle";
    CHECK(find(text18, "oops") == string("oops"));
    CHECK(find(text18, "uops") == string("oops"));
    CHECK(find(text18, "oups") == string("oops"));
    CHECK(find(text18, "uups") == string("oops"));
    CHECK(find(text18, "omg") == string("omg"));
    CHECK(find(text18, "umg") == string("omg"));
    CHECK(find(text18, "uncle") == string("uncle"));
    CHECK(find(text18, "oncle") == string("uncle"));


}


