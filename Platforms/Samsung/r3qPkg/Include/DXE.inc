    INF MdeModulePkg/Core/Dxe/DxeMain.inf
    INF MdeModulePkg/Universal/PCD/Dxe/Pcd.inf

    INF ArmPkg/Drivers/CpuDxe/CpuDxe.inf

    INF MdeModulePkg/Core/RuntimeDxe/RuntimeDxe.inf
    INF MdeModulePkg/Universal/SecurityStubDxe/SecurityStubDxe.inf

    INF Binaries/r3q/QcomPkg/Drivers/TzDxe/ScmDxeLA.inf
    INF Binaries/r3q/QcomPkg/Drivers/TzDxe/TzDxeLA.inf

    INF MdeModulePkg/Universal/WatchdogTimerDxe/WatchdogTimer.inf
    INF MdeModulePkg/Universal/CapsuleRuntimeDxe/CapsuleRuntimeDxe.inf
    INF MdeModulePkg/Universal/ReportStatusCodeRouter/RuntimeDxe/ReportStatusCodeRouterRuntimeDxe.inf
    INF MdeModulePkg/Universal/StatusCodeHandler/RuntimeDxe/StatusCodeHandlerRuntimeDxe.inf
    INF MdeModulePkg/Universal/Variable/RuntimeDxe/VariableRuntimeDxe.inf

    INF Binaries/r3q/QcomPkg/Drivers/EmbeddedMonotonicCounter/EmbeddedMonotonicCounter.inf
    INF Binaries/r3q/QcomPkg/Drivers/SimpleTextInOutSerialDxe/SimpleTextInOutSerial.inf
    INF Binaries/r3q/QcomPkg/Drivers/ResetRuntimeDxe/ResetRuntimeDxe.inf

    INF EmbeddedPkg/RealTimeClockRuntimeDxe/RealTimeClockRuntimeDxe.inf
    INF EmbeddedPkg/MetronomeDxe/MetronomeDxe.inf

    INF MdeModulePkg/Universal/PrintDxe/PrintDxe.inf
    INF MdeModulePkg/Universal/DevicePathDxe/DevicePathDxe.inf
    INF MdeModulePkg/Universal/Console/ConPlatformDxe/ConPlatformDxe.inf
    INF MdeModulePkg/Universal/Console/ConSplitterDxe/ConSplitterDxe.inf
    INF MdeModulePkg/Universal/Console/GraphicsConsoleDxe/GraphicsConsoleDxe.inf
    INF MdeModulePkg/Universal/HiiDatabaseDxe/HiiDatabaseDxe.inf

    INF Binaries/r3q/QcomPkg/Drivers/FontDxe/FontDxe.inf
    # INF Binaries/r3q/QcomPkg/Drivers/EnvDxe/EnvDxe.inf
    # INF Binaries/r3q/QcomPkg/Drivers/QcomWDogDxe/QcomWDogDxe.inf
    INF Binaries/r3q/QcomPkg/Drivers/QcomMpmTimerDxe/QcomMpmTimerDxe.inf

    INF ArmPkg/Drivers/ArmGic/ArmGicDxe.inf
    INF ArmPkg/Drivers/TimerDxe/TimerDxe.inf

    INF Binaries/r3q/QcomPkg/Drivers/ChipInfoDxe/ChipInfoDxe.inf
    INF Binaries/r3q/QcomPkg/Drivers/SmemDxe/SmemDxe.inf

    INF QcomPkg/Drivers/DynamicRamDxe/DynamicRamDxe.inf

    INF Binaries/r3q/QcomPkg/Drivers/ULogDxe/ULogDxe.inf
    INF Binaries/r3q/QcomPkg/Drivers/NpaDxe/NpaDxe.inf
    INF Binaries/r3q/QcomPkg/Drivers/CmdDbDxe/CmdDbDxe.inf
    INF Binaries/r3q/QcomPkg/Drivers/RpmhDxe/RpmhDxe.inf

!if $(USE_CUSTOM_DISPLAY_DRIVER) == 1
    INF Binaries/r3q/QcomPkg/Drivers/CPRDxe/CPRDxe.inf
!endif

    INF Binaries/r3q/QcomPkg/Drivers/PdcDxe/PdcDxe.inf

    INF MdeModulePkg/Universal/Disk/DiskIoDxe/DiskIoDxe.inf
    INF MdeModulePkg/Universal/Disk/PartitionDxe/PartitionDxe.inf

    INF FatPkg/EnhancedFatDxe/Fat.inf

    INF MdeModulePkg/Universal/Disk/UnicodeCollation/EnglishDxe/EnglishDxe.inf

    INF Binaries/r3q/QcomPkg/Drivers/DALSYSDxe/DALSYSDxe.inf
    INF Binaries/r3q/QcomPkg/Drivers/ClockDxe/ClockDxe.inf
    INF Binaries/r3q/QcomPkg/Drivers/HALIOMMUDxe/HALIOMMUDxe.inf
    INF Binaries/r3q/QcomPkg/Drivers/HWIODxe/HWIODxe.inf
    INF Binaries/r3q/QcomPkg/Drivers/GpiDxe/GpiDxe.inf
    INF Binaries/r3q/QcomPkg/Drivers/I2CDxe/I2CDxe.inf
    INF Binaries/r3q/QcomPkg/Drivers/SPMIDxe/SPMIDxe.inf
    INF Binaries/r3q/QcomPkg/Drivers/SdccDxe/SdccDxe.inf
    INF Binaries/r3q/QcomPkg/Drivers/UFSDxe/UFSDxe.inf
    INF Binaries/r3q/QcomPkg/Drivers/TLMMDxe/TLMMDxe.inf

!if $(USE_CUSTOM_DISPLAY_DRIVER) == 1
    INF Binaries/r3q/QcomPkg/Drivers/DisplayDxe/DisplayDxe.inf
!else
    INF SiliciumPkg/Drivers/SimpleFbDxe/SimpleFbDxe.inf
!endif

    INF Binaries/r3q/QcomPkg/Drivers/PlatformInfoDxe/PlatformInfoDxe.inf
    INF Binaries/r3q/QcomPkg/Drivers/ButtonsDxe/ButtonsDxe.inf
    INF Binaries/r3q/QcomPkg/Drivers/PmicDxe/PmicDxeLa.inf
    INF Binaries/r3q/QcomPkg/Drivers/UsbPwrCtrlDxe/UsbPwrCtrlDxe.inf
    INF Binaries/r3q/QcomPkg/Drivers/AdcDxe/AdcDxe.inf
    INF Binaries/r3q/QcomPkg/Drivers/TsensDxe/TsensDxe.inf
    INF Binaries/r3q/QcomPkg/Drivers/LimitsDxe/LimitsDxe.inf
    INF Binaries/r3q/QcomPkg/Drivers/DDRInfoDxe/DDRInfoDxe.inf
    INF Binaries/r3q/QcomPkg/Drivers/UsbfnDwc3Dxe/UsbfnDwc3Dxe.inf
    INF Binaries/r3q/QcomPkg/Drivers/UsbMsdDxe/UsbMsdDxe.inf
    INF Binaries/r3q/QcomPkg/Drivers/UsbDeviceDxe/UsbDeviceDxe.inf
    INF Binaries/r3q/QcomPkg/Drivers/UsbConfigDxe/UsbConfigDxe.inf
    INF Binaries/r3q/QcomPkg/Drivers/HashDxe/HashDxe.inf
    INF Binaries/r3q/QcomPkg/Drivers/CipherDxe/CipherDxe.inf
    INF Binaries/r3q/QcomPkg/Drivers/RNGDxe/RngDxe.inf

    INF MdeModulePkg/Universal/BdsDxe/BdsDxe.inf 

    INF Binaries/r3q/QcomPkg/Drivers/CrashDumpDxe/CrashDumpDxe.inf
    INF Binaries/r3q/QcomPkg/Drivers/SamsungDxe/CcicDxe/CcicDxe.inf
    INF Binaries/r3q/QcomPkg/Drivers/SamsungDxe/MuicDxe/MuicDxe.inf
    INF Binaries/r3q/QcomPkg/Drivers/SamsungDxe/ChgDxe/ChgDxe.inf
    INF Binaries/r3q/QcomPkg/Drivers/SamsungDxe/DispPmicDxe/DispPmicDxe.inf
    INF Binaries/r3q/QcomPkg/Drivers/SamsungDxe/SubPmicDxe/SubPmicDxe.inf
    INF Binaries/r3q/QcomPkg/Drivers/SamsungDxe/RedriverDxe/RedriverDxe.inf
    INF Binaries/r3q/QcomPkg/Drivers/SamsungDxe/SvcLedDxe/SvcLedDxe.inf
    INF Binaries/r3q/QcomPkg/Drivers/SamsungDxe/HallIcDxe/HallIcDxe.inf
    INF Binaries/r3q/QcomPkg/Drivers/SamsungDxe/VibDxe/VibDxe.inf
    INF Binaries/r3q/QcomPkg/Drivers/PILDxe/PILDxe.inf
    INF Binaries/r3q/QcomPkg/Application/SamsungQuestApp/SamsungQuestApp.inf
    INF Binaries/r3q/QcomPkg/Drivers/ShmBridgeDxe/ShmBridgeDxeLA.inf