# TrustDesktop


支持window，mac

mac，window的代码提交都是用终端命令

问题1：git clone时出现RPC failed; curl 56 OpenSSL SSL_read
解决办法：
> git init
> git config http.postBuffer 524288000
> git config http.sslVerify "false"
