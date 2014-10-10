#include "ini.h"

int main()
{

    // INI
    INI * ini = new INI("ini");

    // 读取
    ini->ReadINI(); // False Error

    // 写入
    ini->WriteINI(); // False Error

    // 取值
    ini->GetValByKeysAndVals("keys", "values");

    // 空l
    ini->GetValByKeysAndVals("keys", "values").empty(); // Error

    // 添加
    ini->AppendValByKeysAndVals("keys", "values", "value");

    // 删除
    ini->DelValByKeysAndVals("keys", "values"); // False Error

    // 查看
    ini->ShowINI();

    // 清空
    ini->ClearINI();

    // 释放
    delete(ini);

    // 返回
    return 0;

}
