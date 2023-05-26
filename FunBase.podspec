Pod::Spec.new do |spec|
  spec.name         = 'FunBase'
  spec.version      = '1.0.0'
  spec.description      = <<-DESC
  OC version of FunBase SDK
                       DESC
  spec.summary      = 'FunBase'
  spec.license      = "MIT" 
  spec.author       = { "gonglin.jia" => "gonglin.jia@kingsgroupgames.com" }
  spec.homepage     = "https://github.com/xxx"
  spec.platform     = :ios, '11.0'
  spec.ios.deployment_target = '11.0'
  spec.source       = { :git => 'https://github.com/mumu201405/PodTest2.git', :tag => spec.version.to_s }

  spec.source_files = 'FunBase/Headers/*.h'
  spec.public_header_files = 'FunBase/Headers/*.h'
  spec.vendored_libraries = 'FunBase/*.a'
  spec.vendored_frameworks = 'FunBase/*.framework'

  spec.pod_target_xcconfig = {
        'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64'
  }
  spec.user_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }

end
