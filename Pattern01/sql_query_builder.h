#include <string>
#include <vector>
//Выполнив это задание, вы научитесь использовать шаблон Builder для практических задач.

class SqlSelectQueryBuilder {
public:
    SqlSelectQueryBuilder();

    SqlSelectQueryBuilder& AddColumn(const std::string& column);
    SqlSelectQueryBuilder& AddFrom(const std::string& table);
    SqlSelectQueryBuilder& AddWhere(const std::string& column, const std::string& value);

    std::string BuildQuery() const;

private:
    std::vector<std::string> columns_;
    std::string from_;
    std::vector<std::pair<std::string, std::string>> where_;

    bool hasColumns() const;
}; 
