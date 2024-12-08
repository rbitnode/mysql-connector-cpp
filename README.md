# mysql-connector-cpp-bazel

Bazel port for MySQL C++ connector static library.<br>
Current mysql connector version: `9.1.0`

## How to use?

Currently this module is not part of bazel central registry, use below code in your MODULE.bazel file:

```
```

*Note:* Legacy mysql connector is not supported as it will be removed from future releases, This connector only supports MySQL latest [XDev APIs](https://dev.mysql.com/doc/x-devapi-userguide/en/).