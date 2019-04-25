#
#  Be sure to run `pod spec lint aiqapi.podspec' to ensure this is a
#  valid spec and to remove all comments including this before submitting the spec.
#
#  To learn more about Podspec attributes see https://docs.cocoapods.org/specification.html
#  To see working Podspecs in the CocoaPods repo see https://github.com/CocoaPods/Specs/
#

Pod::Spec.new do |spec|

  spec.name         = "AIQApi"
  spec.version      = "0.1.0"
  spec.summary      = "APIApi is an objective-c framework for AIQ's API."

  spec.homepage     = 'https://github.com/aiqtech/aiqapi-ios'
  spec.license          = { :type => "Commercial", :text => "http://aiq.tech/enterprise.php" }
  spec.author           = { 'AIQ' => 'tech@aiq.tech' }
  spec.source           = {  :git => "https://github.com/aiqtech/aiqapi-ios.git", :tag => spec.version.to_s  }
  
  spec.ios.deployment_target = '8.3'
  spec.ios.vendored_frameworks = "Frameworks/AIQApi.framework"
end
