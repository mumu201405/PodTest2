Pod::Spec.new do |spec|
  spec.name         = 'FunBase'
  spec.version      = '0.1.2'
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

  spec.source_files = 'FunBase/fpx/**/*.h', 'FunBase/test/*.h'
  spec.vendored_libraries = 'FunBase/fpx/**/*.a', 'FunBase/test/*.a'


  spec.pod_target_xcconfig = {
        'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64'
  }
  spec.user_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }

end
