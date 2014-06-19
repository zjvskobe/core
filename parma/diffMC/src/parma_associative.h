#ifndef PARMA_ASSOCIATIVE_H
#define PARMA_ASSOCIATIVE_H
#include <map>

namespace parma {
  template <class T> class Associative {
    typedef std::map<int, T> Container;
    public:
      Associative() {
        iteratorActive = false;
      }
      void begin() {
        assert(!iteratorActive);
        iteratorActive = true;
        cItr = c.begin();
      }
      typedef std::pair<const int, T> Item;
      const Item* iterate() {
        assert(iteratorActive);
        if( cItr == c.end() ) 
          return NULL;
        else
          return &(*cItr++); // there is no spoon ... and this is likely crap
      }
      void end() {
        assert(iteratorActive);
        iteratorActive = false;
      }
      T get(int key) {
        return c[key];
      }
      void set(int key, T value) {
        c[key] = value;
      }
      bool has(int key) {
        return (c.count(key) != 0);
      }
      void print(const char* key) {
        std::stringstream s;
        s << key << " ";
        const Item* i;
        begin();
        while( (i = iterate()) ) 
          s << i->first << " " << i->second << " ";
        end();
        std::string str = s.str();
        PCU_Debug_Print("%s\n", str.c_str());
      }
    protected:
      Container c;
    private:
      typename Container::iterator cItr;
      bool iteratorActive;
  };
}
#endif
