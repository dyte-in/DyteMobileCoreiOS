// swift-tools-version:5.5
import PackageDescription

// BEGIN KMMBRIDGE VARIABLES BLOCK (do not edit)
let remoteKotlinUrl = "https://github.com/dyte-in/DyteMobileCoreiOS/archive/refs/tags/1.25.2.zip"
let remoteKotlinChecksum = "cf9400a205bf54930269ac4083ef75c3c98f8a9fa7accdc349f22ecef7a12f29"
let packageName = "DyteiOSCore"
// END KMMBRIDGE BLOCK

let package = Package(
    name: "DyteMobileCoreiOS",
    platforms: [.iOS(.v13)],
    products: [
        .library(name: packageName, targets: [packageName, "WebRTC"])
    ],
    targets: [
        .binaryTarget(
            name: "WebRTC",
            url: "https://github.com/webrtc-sdk/Specs/releases/download/114.5735.02/WebRTC.xcframework.zip",
            checksum: "c30668eac8f14a21cfb5612ca4e81b10e2d8d8d5e5231c00874ca118eff9a1c0"
        ),
        .binaryTarget(
            name: packageName,
            url: remoteKotlinUrl,
            checksum: remoteKotlinChecksum
        )
    ]
)
