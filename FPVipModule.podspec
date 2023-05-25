Pod::Spec.new do |spec|
  spec.name         = 'FPVipModule'
  spec.version      = '0.0.1'
  spec.summary      = 'This is my first private library.'
  spec.license      = "MIT" 
  spec.author       = { "gonglin.jia" => "gonglin.jia@kingsgroupgames.com" }
  spec.homepage     = "https://github.com/xxx"
  spec.platform     = :ios, '9.0'
  spec.ios.deployment_target = '9.0'
  spec.source       = { :git => 'https://github.com/mumu201405/PodTest2.git', :tag => spec.version.to_s }
  spec.vendored_frameworks = 'fpxsdks/vipsdk/fpVipSdk.framework'

end

