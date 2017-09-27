#include <string>

class Node {
private:
  std::string mName;
  std::string mDescription;

protected:
  Node(std::string name, std::string description);

public:
  std::string getDescription();
  std::string getName();
  void setDescription(std::string description);
  void setName(std::string name);
};
