Pod::Spec.new do |spec|
    spec.name                     = 'DyteiOSCore'
    spec.version                  = '1.23.1'
    spec.homepage                 = 'https://dyte.io'
    spec.source                   = { 
                                      :http => 'https://dyte-assets.s3.ap-south-1.amazonaws.com/sdk/ios_core/DyteiOSCore-1.23.1-c54fed48-9068-4354-abf2-0d983ee14282.xcframework.zip',
                                      :type => 'zip',
                                      :headers => ['Accept: application/octet-stream']
                                    }
    spec.authors                  = { 'Dyte' => 'dev@dyte.io' }
    spec.license                  = { :type => 'MIT', :file => 'LICENSE' }
    spec.summary                  = "Dyte's Audio/Video SDKs"
    spec.platform = :ios
    spec.swift_version = "5.0"
    spec.ios.deployment_target = '13.0'
    spec.dependency 'WebRTC-SDK', '114.5735.02'
end
