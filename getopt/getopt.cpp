#include <getopt.h>
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char **argv) {
  /*
   *   this program takes in two arguments
   *      --optionA or -a does not have a required option
   *      --optionB or -b DOES have a required option.
   */
  struct option longOpts[] = {{"optionA", no_argument, nullptr, 'a'},
                              {"optionB", required_argument, nullptr, 'b'},
                              {nullptr, 0, nullptr, 0}};

  int opt = 0, index = 0;
  bool optionA = false;
  string optionB;
  /* In "ab:", ":" means required argument, and "::" means optional argument,
   * and none means no argument required */
  while ((opt = getopt_long(argc, argv, "ab:", longOpts, &index)) != -1) {
    switch (opt) {
    /* switch statements for cases "-a/--optionA" and "-b/--optionB" */
    case 'a':
      cout << "you have triggered option A\n";
      optionA = true;
      break;
    case 'b':
      cout << "you have triggered option B with option " << optarg << "\n";
      /*optarg is defined in getopt.h*/
      optionB = optarg;
      break;
    default:
      cout << "I didn't recognize one of your flags\n";
      break;
    }
  }
  cout << "optionA = " << optionA << endl;
  cout << "optionB = " << optionB << endl;
  return 0;
}
