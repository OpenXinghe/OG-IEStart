# OG-IEStart
## 项目介绍
开源星河旗下IE启动器

## 运行原理
启动后创建临时文件“Temp.vbs”并往内输入代码
  
    CreateObject("InternetExplorer.Application").Visible=true

## 产品缺点
1.启动时会被杀毒软件报毒。
2.运行时的Temp.vbs关闭程序后不会自动删除。
3.运行程序后VBS的运行弹窗会显示5-10秒。

## 语言（Language）
- en [English](Readme/en-us.md)
