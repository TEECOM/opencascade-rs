#include <TopoDS_Shape.hxx>

inline std::unique_ptr<std::string> TopoDS_Shape_DumpJson(const TopoDS_Shape &shape) {
  std::ostringstream(stream);
  shape.DumpJson(stream, -1);
  auto string = new std::string();
  *string = stream.str();
  return std::unique_ptr<std::string>(string);
}
