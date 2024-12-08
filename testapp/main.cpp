#include <iostream>
#include <mysqlx/xdevapi.h>

using namespace std;
using namespace mysqlx;

int main()
{
    Session sess("localhost", 3306, "user", "password");
    Schema db = sess.getSchema("test_db");
    Collection myColl = db.getCollection("my_collection");
    DocResult myDocs = myColl.find("name like :param").limit(1).bind("param","L%").execute();
    cout << myDocs.fetchOne();
    
    // sess.sql("use test_db").execute();
    // auto result = sess.sql("SELECT * FROM my_table").execute();
    // Row row1 = result.fetchOne();

    return 0;
}