#
#  Be sure to run `pod spec lint SnailKitFramework.podspec' to ensure this is a
#  valid spec and to remove all comments including this before submitting the spec.
#
#  To learn more about Podspec attributes see https://guides.cocoapods.org/syntax/podspec.html
#  To see working Podspecs in the CocoaPods repo see https://github.com/CocoaPods/Specs/
#

Pod::Spec.new do |spec|

  spec.name         = "SnailKitFramework"
  spec.version      = "0.0.3"
  spec.summary      = "CrazySnail自定义工具库"
  spec.description  = <<-DESC
                        自定义工具库，包含了平时使用过程中的常用view、工具等
                   DESC
  spec.homepage     = "https://code.aliyun.com/CrazySnailLLL/SnailKitFramework.git"
  spec.license      = "MIT"
  spec.author       = { "CrazySnail" => "1223791568@qq.com" }
  spec.platform     = :ios
  spec.platform     = :ios, "9.0"
  spec.source       = { :git => "https://code.aliyun.com/CrazySnailLLL/SnailKitFramework.git", :tag => "#{spec.version}" }
  spec.vendored_frameworks = 'SnailKitFramework.framework'
  spec.dependency "AFNetworking"
  spec.dependency "Aspects"
  
end
