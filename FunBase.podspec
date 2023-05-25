Pod::Spec.new do |spec|
  spec.name         = 'FunBase'
  spec.version      = '0.0.9'
  spec.description      = <<-DESC
  Swift version of WeChat SDK.11111111121212121212
                       DESC
  spec.summary      = 'library.'
  spec.license      = "MIT" 
  spec.author       = { "gonglin.jia" => "gonglin.jia@kingsgroupgames.com" }
  spec.homepage     = "https://github.com/xxx"
  spec.platform     = :ios, '11.0'
  spec.ios.deployment_target = '11.0'
  spec.source       = { :git => 'https://github.com/mumu201405/PodTest2.git', :tag => spec.version.to_s }
  # spec.source_files  = 'FunBase/lib/*.h'
  # spec.vendored_libraries = 'FunBase/lib/libFunBase.a'
  # spec.vendored_frameworks = 'FunBase/lib/fpVipSdk.framework'

  spec.source_files = 'WeChatSDK/*.swift', 'WeCh2atSDK/lib/*.h'
  spec.vendored_libraries = 'WeChatSDK/lib/libWeChatSDK.a'

  spec.library = 'c++'
  spec.frameworks = 'WebKit'

end
