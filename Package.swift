// swift-tools-version:5.5
import PackageDescription

// BEGIN KMMBRIDGE VARIABLES BLOCK (do not edit)
let remoteKotlinUrl = "https://dyte-assets.s3.ap-south-1.amazonaws.com/sdk/ios_core/DyteiOSCore-1.38.0-486c518a-fb65-4d13-a12a-897e6f150d3e.xcframework.zip"
let remoteKotlinChecksum = "758c41a8c25fdf34b4f082437ce562f712c5aa9e2124ecd0068f36a2fdda819d"
let packageName = "DyteiOSCore"
// END KMMBRIDGE BLOCK

let package = Package(
    name: "DyteMobileCoreiOS",
    platforms: [.iOS(.v13)],
    products: [
        .library(name: packageName, targets: [packageName, "DyteWebRTC"]),
    ],
    targets: [
        .binaryTarget(
            name: "DyteWebRTC",
            url: "https://dyte-assets.s3.ap-south-1.amazonaws.com/sdk/ios_core/DyteWebRTC_v0.0.4.zip",
            checksum: "25318dfb4bd018fde6ed7fd3337d9aa1c62fc8b39ab985c60fa530eb3819e68a"
        ),
        .binaryTarget(
            name: packageName,
            url: remoteKotlinUrl,
            checksum: remoteKotlinChecksum
        ),
    ]
)

