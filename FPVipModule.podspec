Pod::Spec.new do |spec|
  spec.name         = 'FPVipModule'
  spec.version      = '0.0.5'
  spec.summary      = 'This is my first private library.'
  spec.license      = "MIT" 
  spec.author       = { "gonglin.jia" => "gonglin.jia@kingsgroupgames.com" }
  spec.homepage     = "https://github.com/CrimsonVampire"
  spec.platform     = :ios, '9.0'
  spec.ios.deployment_target = '9.0'
  spec.source       = { :git => 'https://gitlab-ee.funplus.io/fp-sdk/fp-vip-chat.git', :tag => spec.version.to_s }
  spec.public_header_files = "fpVipSdk/**/*.h"
  spec.vendored_frameworks = 'SDKs/fpVipSdk.framework'

end

