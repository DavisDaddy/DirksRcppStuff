
  
  #include <RInside.h>              // embedded R via RInside
  
  int main(int argc, char *argv[]) {
  
      RInside R(argc, argv);        // create embedded R inst.
  
      R["txt"] = "Hello, world!\n"; // assign  to 'txt' in R
  
      R.parseEvalQ("cat(txt)");     // eval string, ignore result
  
      exit(0);
  }
  
