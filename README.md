# mysql-connector-cpp-bazel

Bazel port for MySQL C++ connector static library.<br>
Current mysql connector version: `9.1.0`

## How to use?

Currently this module is not part of bazel central registry, use below code in your MODULE.bazel file:

```
# MODULE.bazel file

bazel_dep(name = "mysql-connector-cpp-bazel", version = "1.0")
git_override(
    module_name = "mysql-connector-cpp-bazel",
    remote = "https://github.com/rbitnode/mysql-connector-cpp-bazel.git",
    commit = "861bcd48be1ebfd86f99c6e82ef0d92092bdcdab"
)
```
and then you can reference library in deps part of your targets, like below:
```
# BUILD.bazel file

cc_binary(
    ...
    deps = [
        # for release builds
        "@mysql-connector-cpp-bazel//:libmysqlcppconn",

        # OR

        # for debug builds
        "@mysql-connector-cpp-bazel//:libmysqlcppconnd",
    ],
)
```


*Note:* Legacy mysql connector is not supported as it will be removed from future releases, This connector only supports MySQL latest [XDev APIs](https://dev.mysql.com/doc/x-devapi-userguide/en/).