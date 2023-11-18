Pod::Spec.new do |spec|
    spec.name                     = 'DyteiOSCore'
    spec.version                  = '1.25.1'
    spec.homepage                 = 'https://dyte.io'
    spec.source                   = { :git => "https://github.com/dyte-in/DyteMobileCoreiOS.git", :tag => spec.version.to_s }
    spec.authors                  = { 'Dyte' => 'dev@dyte.io' }
    spec.license                  = { :type => 'MIT', :file => 'LICENSE' }
    spec.summary                  = "Dyte's Audio/Video SDKs"
    spec.vendored_frameworks = "DyteiOSCore.xcframework"
    spec.platform = :ios
    spec.swift_version = "5.0"
    spec.ios.deployment_target = '13.0'
    spec.dependency 'WebRTC-SDK', '114.5735.02'
end
