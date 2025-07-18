libvirt-1.1.0/src/util/virutil.c,virFindFCHostCapableVport,ATTRIBUTE_UNUSED,def{2047},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virutil.c,virFindFCHostCapableVport,p,def{1942,1947},use{1948},dvars{},pointers{entry},cfuncs{}
libvirt-1.1.0/src/util/virutil.c,virFindFCHostCapableVport,host,def{1941},use{1948,1954,1957,1958,1969,1970,1974,1975},dvars{},pointers{},cfuncs{VIR_DEBUG{2}}
libvirt-1.1.0/src/util/virutil.c,virFindFCHostCapableVport,max_vports,def{1928},use{1969,1976,1983,1984,1985,1990,1996},dvars{},pointers{},cfuncs{VIR_FREE{1}}
libvirt-1.1.0/src/util/virutil.c,virFindFCHostCapableVport,state,def{1930},use{1957,1963,1964,1967},dvars{},pointers{},cfuncs{VIR_FREE{1}}
libvirt-1.1.0/src/util/virutil.c,virFindFCHostCapableVport,sysfs_prefix,def{1923},use{1925,1933},dvars{dir},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virutil.c,virFindFCHostCapableVport,prefix,def{1925},use{1933,1936,1940,1954,1957,1969,1974},dvars{NULLentry},pointers{sysfs_prefix},cfuncs{virReportSystemError{2}}
libvirt-1.1.0/src/util/virutil.c,virFindFCHostCapableVport,vports,def{1929},use{1974,1983,1984,1985,1991,1997},dvars{},pointers{},cfuncs{VIR_FREE{1}}
libvirt-1.1.0/src/util/virutil.c,virFindFCHostCapableVport,entry,def{1927},use{1944,1947,1950,1986},dvars{},pointers{},cfuncs{VIR_STRDUP{2},VIR_DEBUG{2}}
libvirt-1.1.0/src/util/virutil.c,virFindFCHostCapableVport,NULLentry,def{1940},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virutil.c,virFindFCHostCapableVport,dir,def{1926,1933},use{1940,1995},dvars{NULLentry},pointers{prefix},cfuncs{closedir{1}}
libvirt-1.1.0/src/util/virutil.c,virFindFCHostCapableVport,ret,def{1931},use{1986,1998},dvars{},pointers{},cfuncs{VIR_STRDUP{1}}
libvirt-1.1.0/src/util/virutil.c,virGetFCHostNameByWWN,ATTRIBUTE_UNUSED,def{2038,2039,2040},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virutil.c,virGetFCHostNameByWWN,p,def{1832},use{1871,1892},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virutil.c,virGetFCHostNameByWWN,wwpn_path,def{1829},use{1877,1883,1886,1890,1894,1908},dvars{},pointers{},cfuncs{READ_WWN{1},VIR_FREE{1}}
libvirt-1.1.0/src/util/virutil.c,virGetFCHostNameByWWN,ret,def{1833},use{1900,1911},dvars{},pointers{},cfuncs{VIR_STRDUP{1}}
libvirt-1.1.0/src/util/virutil.c,virGetFCHostNameByWWN,wwnn_buf,def{1830},use{1869,1872,1884,1895,1909},dvars{},pointers{},cfuncs{VIR_FREE{1},READ_WWN{2}}
libvirt-1.1.0/src/util/virutil.c,virGetFCHostNameByWWN,wwnn_path,def{1828},use{1858,1864,1865,1869,1873,1885,1893,1907},dvars{},pointers{},cfuncs{READ_WWN{1},VIR_FREE{1}}
libvirt-1.1.0/src/util/virutil.c,virGetFCHostNameByWWN,wwpn_buf,def{1831},use{1890,1896,1910},dvars{},pointers{},cfuncs{VIR_FREE{1},READ_WWN{2}}
libvirt-1.1.0/src/util/virutil.c,virGetFCHostNameByWWN,wwpn,def{1823},use{1892},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virutil.c,virGetFCHostNameByWWN,NULLentry,def{1854},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virutil.c,virGetFCHostNameByWWN,entry,def{1826},use{1855,1859,1878,1900},dvars{},pointers{},cfuncs{VIR_STRDUP{2}}
libvirt-1.1.0/src/util/virutil.c,virGetFCHostNameByWWN,sysfs_prefix,def{1821},use{1825,1835},dvars{dir},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virutil.c,virGetFCHostNameByWWN,prefix,def{1825},use{1835,1838,1854,1858,1877},dvars{NULLentry},pointers{sysfs_prefix},cfuncs{virReportSystemError{2}}
libvirt-1.1.0/src/util/virutil.c,virGetFCHostNameByWWN,dir,def{1827,1835},use{1854,1906},dvars{NULLentry},pointers{prefix},cfuncs{closedir{1}}
libvirt-1.1.0/src/util/virutil.c,virGetFCHostNameByWWN,wwnn,def{1822},use{1871},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virutil.c,virGetGroupIDByName,ret,def{915,943,948},use{943,948,953},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virutil.c,virGetGroupIDByName,rc,def{914,926},use{186,188,190,192,210,212,213,215,229,232,234,934,940,1303,1308},dvars{len,ret},pointers{},cfuncs{strlen {1},strerror_r {3},strerror_r {2},virStrerror{3},safe_copy {3},strerror_r{3}}
libvirt-1.1.0/src/util/virutil.c,virGetGroupIDByName,strbuflen,def{913,919},use{919,921,926,927},dvars{rc},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virutil.c,virGetGroupIDByName,val,def{912},use{913,918},dvars{strbuflen},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virutil.c,virGetGroupIDByName,grbuf,def{910},use{926},dvars{rc},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virutil.c,virGetGroupIDByName,buf,def{935},use{940,1305,1310},dvars{errno},pointers{},cfuncs{virStrerror{6},virStrerror{4}}
libvirt-1.1.0/src/util/virutil.c,virGetGroupIDByName,gid,def{907,947},use{},dvars{},pointers{gid},cfuncs{}
libvirt-1.1.0/src/util/virutil.c,virGetGroupIDByName,gr,def{911},use{926,933,947},dvars{gid,rc},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virutil.c,virGetGroupIDByName,strbuf,def{909},use{921,926,927,951},dvars{rc},pointers{group},cfuncs{VIR_FREE{1}}
libvirt-1.1.0/src/util/virutil.c,virGetGroupIDByName,name,def{907},use{926,940},dvars{rc},pointers{},cfuncs{VIR_WARN{2}}
libvirt-1.1.0/src/util/virutil.c,virEnumFromString,i,def{385},use{389,391},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virutil.c,virEnumFromString,ntypes,def{382},use{389},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virutil.c,virEnumFromString,type,def{383},use{386,390},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virutil.c,virEnumFromString,types,def{381},use{390},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virutil.c,virManageVport,ATTRIBUTE_UNUSED,def{2028,2029,2030,2031},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virutil.c,virManageVport,operation_file,def{1750,1754,1757},use{1754,1757,1769,1780,1788},dvars{},pointers{},cfuncs{virReportError{2}}
libvirt-1.1.0/src/util/virutil.c,virManageVport,vport_name,def{1749},use{1793,1801,1807,1810},dvars{},pointers{},cfuncs{VIR_FREE{1},virReportSystemError{2}}
libvirt-1.1.0/src/util/virutil.c,virManageVport,parent_host,def{1743},use{1768,1779,1788},dvars{},pointers{},cfuncs{virReportError{3}}
libvirt-1.1.0/src/util/virutil.c,virManageVport,operation,def{1746},use{1752,1761},dvars{},pointers{},cfuncs{virReportError{2}}
libvirt-1.1.0/src/util/virutil.c,virManageVport,operation_path,def{1749},use{1765,1774,1775,1776,1785,1801,1807,1811},dvars{},pointers{},cfuncs{virReportSystemError{3},VIR_FREE{1}}
libvirt-1.1.0/src/util/virutil.c,virManageVport,ret,def{1748,1802},use{1802,1812},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virutil.c,virManageVport,wwnn,def{1745},use{1796},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virutil.c,virManageVport,wwpn,def{1744},use{1795},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virutil.c,virIsCapableVport,ATTRIBUTE_UNUSED,def{2020,2021},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virutil.c,virIsCapableVport,ret,def{1712,1734},use{1739},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virutil.c,virIsCapableVport,fc_host_path,def{1711},use{1714,1732,1737},dvars{},pointers{},cfuncs{VIR_FREE{1}}
libvirt-1.1.0/src/util/virutil.c,virIsCapableVport,host,def{1708},use{1717,1726},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virutil.c,virIsCapableVport,scsi_host_path,def{1710},use{1723,1733,1738},dvars{},pointers{},cfuncs{VIR_FREE{1}}
libvirt-1.1.0/src/util/virutil.c,virIsCapableVport,sysfs_prefix,def{1707},use{1716,1725},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virutil.c,virGetWin32DirectoryRoot,retpath,def{1096},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virutil.c,virGetWin32DirectoryRoot,tmp,def{1100,1104},use{1105,1106,1107},dvars{},pointers{windowsdir},cfuncs{}
libvirt-1.1.0/src/util/virutil.c,virGetWin32DirectoryRoot,windowsdir,def{1094,1109},use{1098,1104,1109,1111,1114,2194,2198,2199,2200,2201,2203,2204,2209,2210,2212,2213,2214,2217,2218,2220,2226,2227,2228,2230,2235,2236,2237,2238,2241},dvars{},pointers{},cfuncs{strchr{1},strcpy{1},virFileSkipRoot{1}}
libvirt-1.1.0/src/util/virutil.c,virGetWin32DirectoryRoot,path,def{1092},use{1114},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virutil.c,virReadFCHost,p,def{1653,1667,1668,1670,1673},use{1668,1671,1675},dvars{},pointers{buf},cfuncs{}
libvirt-1.1.0/src/util/virutil.c,virReadFCHost,ret,def{1654,1678},use{1678,1682},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virutil.c,virReadFCHost,sysfs_path,def{1652},use{1657,1664,1680},dvars{},pointers{},cfuncs{VIR_FREE{1}}
libvirt-1.1.0/src/util/virutil.c,virReadFCHost,ATTRIBUTE_UNUSED,def{2002,2003,2004,2005},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virutil.c,virReadFCHost,result,def{1650},use{1675},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virutil.c,virReadFCHost,buf,def{1655},use{1664,1667,1670,1673,1681},dvars{},pointers{},cfuncs{VIR_FREE{1}}
libvirt-1.1.0/src/util/virutil.c,virReadFCHost,entry,def{1649},use{1659},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virutil.c,virReadFCHost,host,def{1648},use{1659},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virutil.c,virReadFCHost,sysfs_prefix,def{1647},use{1658},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virutil.c,virSetNonBlock,fd,def{124},use{125},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virutil.c,virGetDeviceUnprivSGIO,tmp,def{1599,1614,1615},use{1615},dvars{},pointers{buf},cfuncs{}
libvirt-1.1.0/src/util/virutil.c,virGetDeviceUnprivSGIO,ret,def{1600,1623},use{1623,1627},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virutil.c,virGetDeviceUnprivSGIO,sysfs_path,def{1597},use{1605,1611,1619,1625},dvars{},pointers{},cfuncs{VIR_FREE{1},virReportError{2}}
libvirt-1.1.0/src/util/virutil.c,virGetDeviceUnprivSGIO,retsysfs_path,def{1602},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virutil.c,virGetDeviceUnprivSGIO,unpriv_sgio,def{1595},use{1617},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virutil.c,virGetDeviceUnprivSGIO,path,def{1593},use{1602},dvars{retsysfs_path},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virutil.c,virGetDeviceUnprivSGIO,sysfs_dir,def{1594},use{1602},dvars{retsysfs_path},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virutil.c,virGetDeviceUnprivSGIO,buf,def{1598},use{1611,1614,1617,1626},dvars{},pointers{},cfuncs{VIR_FREE{1}}
libvirt-1.1.0/src/util/virutil.c,virDiskNameToIndex,n_digits,def{530},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virutil.c,virDiskNameToIndex,i,def{508},use{510,524},dvars{idx},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virutil.c,virDiskNameToIndex,drive_prefix,def{507},use{510,511,512},dvars{},pointers{def,deviceName,name,diskName,disk},cfuncs{strlen{1}}
libvirt-1.1.0/src/util/virutil.c,virDiskNameToIndex,idx,def{506,524},use{525,534},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virutil.c,virDiskNameToIndex,ptr,def{505,512},use{517,520,521,525,526,530,531},dvars{},pointers{drive_prefix,name},cfuncs{strspn{1}}
libvirt-1.1.0/src/util/virutil.c,virDiskNameToIndex,name,def{504},use{511,512},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virutil.c,virValidateWWN,p,def{1467},use{1470,1473,1474,1478},dvars{},pointers{wwn},cfuncs{}
libvirt-1.1.0/src/util/virutil.c,virValidateWWN,i,def{1466},use{1478},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virutil.c,virValidateWWN,wwn,def{1465},use{1467,1469},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virutil.c,virSetDeviceUnprivSGIO,rc,def{1564,1580},use{1581},dvars{},pointers{},cfuncs{virReportSystemError{1}}
libvirt-1.1.0/src/util/virutil.c,virSetDeviceUnprivSGIO,val,def{1562},use{1575,1580,1588},dvars{rc},pointers{},cfuncs{VIR_FREE{1}}
libvirt-1.1.0/src/util/virutil.c,virSetDeviceUnprivSGIO,ret,def{1563,1585},use{1585,1589},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virutil.c,virSetDeviceUnprivSGIO,sysfs_path,def{1561},use{1569,1580,1581,1587},dvars{rc},pointers{},cfuncs{VIR_FREE{1},virReportSystemError{2}}
libvirt-1.1.0/src/util/virutil.c,virSetDeviceUnprivSGIO,NULLsysfs_pathsysfs_path,def{1566},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virutil.c,virSetDeviceUnprivSGIO,unpriv_sgio,def{1559},use{1575},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virutil.c,virSetDeviceUnprivSGIO,sysfs_dir,def{1558},use{1566},dvars{NULLsysfs_pathsysfs_path},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virutil.c,virSetDeviceUnprivSGIO,path,def{1557},use{1566},dvars{NULLsysfs_pathsysfs_path},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virutil.c,virGetUnprivSGIOSysfsPath,ENOSYSrc,def{1539},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virutil.c,virGetUnprivSGIOSysfsPath,rc,def{1537},use{1540},dvars{},pointers{},cfuncs{virReportSystemError{1}}
libvirt-1.1.0/src/util/virutil.c,virGetUnprivSGIOSysfsPath,sysfs_path,def{1536},use{1546,1553},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virutil.c,virGetUnprivSGIOSysfsPath,min,def{1535},use{1539,1548},dvars{ENOSYSrc},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virutil.c,virGetUnprivSGIOSysfsPath,maj,def{1535},use{1539,1548},dvars{ENOSYSrc},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virutil.c,virGetUnprivSGIOSysfsPath,sysfs_dir,def{1533},use{1547},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virutil.c,virGetUnprivSGIOSysfsPath,path,def{1532},use{1539,1542},dvars{ENOSYSrc},pointers{},cfuncs{virReportSystemError{2}}
libvirt-1.1.0/src/util/virutil.c,virLocaleOnceInit,virLocale,def{404},use{405},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virutil.c,virLocaleOnceInit,,def{402},use{405},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virutil.c,virGetGroupID,uint_gid,def{965},use{975,976,982},dvars{gid},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virutil.c,virGetGroupID,ATTRIBUTE_UNUSED,def{1259,1260},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virutil.c,virGetGroupID,gid,def{963,982},use{907,947,970},dvars{},pointers{},cfuncs{virGetGroupIDByName{2}}
libvirt-1.1.0/src/util/virutil.c,virGetGroupID,rc,def{970},use{971,972},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virutil.c,virGetGroupID,group,def{963},use{909,921,926,927,951,967,968,970,975,978},dvars{rc},pointers{},cfuncs{VIR_FREE{1},virReportError{2},virGetGroupIDByName{1}}
libvirt-1.1.0/src/util/virutil.c,virFileWaitForDevices,exitstatus,def{1426},use{1437},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virutil.c,virFileWaitForDevices,settleprog,def{1422,1424},use{1428,1437},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virutil.c,virFileWaitForDevices,,def{1419,1441},use{169,244,246,411,419,420,426,427,429,728,731,733,734,742,744,745,1428,1437,2025,2030,2045,2073,2091,2115,2123,2125,2130,2131,2133,2136,2383,2546,2549,2552,2553,2556,2557,2558,2560,2561,2562,2564,2565,2566,2568,2569,2570,2572,2574,2578,2579,2582,2584,2585,2587,2588,2590,2593,2596},dvars{cmd,string_io,ret},pointers{},cfuncs{realaccess{1},realaccess{2},pthread_join{1},virCommandFree{1},free{1},VIR_FORCE_CLOSE{1},virThreadJoin{1},virCommandAbort{1},virCommandRun{2},virCommandRun{1},VIR_DEBUG{2},errbuf ? NULLSTR{2},virRun{2},virRun{1},VIR_FREE{1},access{2},access{1}}
libvirt-1.1.0/src/util/virutil.c,virIsDevMapperDevice,ATTRIBUTE_UNUSED,def{1458},use{},dvars{},pointers{devpath},cfuncs{}
libvirt-1.1.0/src/util/virutil.c,virIsDevMapperDevice,buf,def{1448},use{1450,1451,1452},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virutil.c,virIsDevMapperDevice,dev_name,def{1446},use{1450},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virutil.c,virSetUIDGIDWithCaps,ATTRIBUTE_UNUSED,def{1410,1411},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virutil.c,virSetUIDGIDWithCaps,need_setpcap,def{1299,1333},use{1335,1387},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virutil.c,virSetUIDGIDWithCaps,need_setgid,def{1298,1321},use{1331,1356,1382},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virutil.c,virSetUIDGIDWithCaps,ret,def{1297,1393,1397},use{1393,1397,1399},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virutil.c,virSetUIDGIDWithCaps,need_setuid,def{1298,1326},use{1331,1356,1384},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virutil.c,virSetUIDGIDWithCaps,capng_ret,def{1297,1347,1390},use{1360,1392},dvars{},pointers{},cfuncs{virReportError{2}}
libvirt-1.1.0/src/util/virutil.c,virSetUIDGIDWithCaps,clearExistingCaps,def{1295},use{1307,1356},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virutil.c,virSetUIDGIDWithCaps,ii,def{1297},use{1310,1311,1315},dvars{},pointers{},cfuncs{capng_update{3}}
libvirt-1.1.0/src/util/virutil.c,virSetUIDGIDWithCaps,capBits,def{1294},use{1311,1331},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virutil.c,virSetUIDGIDWithCaps,gid,def{1294,1409},use{1319,1365,1413},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virutil.c,virSetUIDGIDWithCaps,uid,def{1294,1409},use{1307,1324,1365,1413},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virutil.c,virGetUserID,rc,def{886},use{887,888},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virutil.c,virGetUserID,uint_uid,def{881},use{891,892,898},dvars{uid},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virutil.c,virGetUserID,uid,def{879,898},use{823,842,856,886},dvars{rc},pointers{},cfuncs{VIR_WARN{2},virGetUserIDByName{2}}
libvirt-1.1.0/src/util/virutil.c,virGetUserID,ATTRIBUTE_UNUSED,def{1249,1250},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virutil.c,virGetUserID,user,def{879},use{825,837,842,843,867,883,884,886,891,894},dvars{rc},pointers{},cfuncs{VIR_FREE{1},virReportError{2},virGetUserIDByName{1}}
libvirt-1.1.0/src/util/virutil.c,virGetGroupName,ATTRIBUTE_UNUSED,def{1278},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virutil.c,virGetGroupName,gid,def{814},use{816},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virutil.c,virGetUserCacheDirectory,ret,def{1185},use{1186,1189,1194},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virutil.c,virGetUserCacheDirectory,,def{786,1183,1222},use{1075,1078,1081,1083,1084,1086,1186},dvars{},pointers{},cfuncs{CoTaskMemFree{1},virGetWin32SpecialFolder{2},virGetWin32SpecialFolder{1}}
libvirt-1.1.0/src/util/virutil.c,virFormatIntDecimal,retp,def{471},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virutil.c,virFormatIntDecimal,p,def{470},use{471,482,484},dvars{},pointers{buflen,buf},cfuncs{}
libvirt-1.1.0/src/util/virutil.c,virFormatIntDecimal,val,def{468},use{472,475,476,480,481},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virutil.c,virFormatIntDecimal,buflen,def{468},use{470},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virutil.c,virFormatIntDecimal,buf,def{468},use{470},dvars{},pointers{value,state},cfuncs{}
libvirt-1.1.0/src/util/virutil.c,virGetGroupEnt,NULLrc,def{733},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virutil.c,virGetGroupEnt,rc,def{715},use{740,741},dvars{},pointers{},cfuncs{virReportSystemError{1}}
libvirt-1.1.0/src/util/virutil.c,virGetGroupEnt,strbuflen,def{714,719},use{719,721,733,734},dvars{NULLrc},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virutil.c,virGetGroupEnt,val,def{713},use{714,718},dvars{strbuflen},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virutil.c,virGetGroupEnt,grbuf,def{711},use{733},dvars{NULLrc},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virutil.c,virGetGroupEnt,gid,def{707},use{733,743},dvars{NULLrc},pointers{},cfuncs{virReportSystemError{2}}
libvirt-1.1.0/src/util/virutil.c,virGetGroupEnt,gr,def{712},use{733,740,748},dvars{NULLrc},pointers{},cfuncs{VIR_STRDUP{2}}
libvirt-1.1.0/src/util/virutil.c,virGetGroupEnt,strbuf,def{709},use{721,733,734,736,744,749},dvars{NULLrc},pointers{},cfuncs{VIR_FREE{1}}
libvirt-1.1.0/src/util/virutil.c,virGetGroupEnt,ret,def{710},use{748,750},dvars{},pointers{},cfuncs{VIR_STRDUP{1}}
libvirt-1.1.0/src/util/virutil.c,virSetInherit,ATTRIBUTE_UNUSED,def{109},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virutil.c,virSetInherit,fflags,def{95,96},use{99,101,102},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virutil.c,virSetInherit,inherit,def{94},use{98},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virutil.c,virSetInherit,fd,def{94},use{96,102},dvars{fflags},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virutil.c,virGetXDGDirectory,home,def{762,768},use{769,774},dvars{},pointers{},cfuncs{VIR_FREE{1}}
libvirt-1.1.0/src/util/virutil.c,virGetXDGDirectory,ret,def{761},use{765,769,775},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virutil.c,virGetXDGDirectory,path,def{760},use{764,765},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virutil.c,virGetXDGDirectory,xdgdefdir,def{758},use{769},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virutil.c,virGetXDGDirectory,xdgenvname,def{758},use{760},dvars{},pointers{},cfuncs{getenv{1}}
libvirt-1.1.0/src/util/virutil.c,virDoubleToStr,tmp,def{438,446,448},use{447,448,450},dvars{},pointers{},cfuncs{memmove{2},memmove{1}}
libvirt-1.1.0/src/util/virutil.c,virDoubleToStr,lc,def{439,444},use{445},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virutil.c,virDoubleToStr,number,def{421},use{346,433,441},dvars{ret},pointers{},cfuncs{virAsprintf{3}}
libvirt-1.1.0/src/util/virutil.c,virDoubleToStr,old_loc,def{427,432},use{434},dvars{},pointers{},cfuncs{uselocale{1}}
libvirt-1.1.0/src/util/virutil.c,virDoubleToStr,ret,def{423,433,441},use{455},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virutil.c,virDoubleToStr,radix,def{438,445},use{446,449,450},dvars{tmp},pointers{lc},cfuncs{ strlen{2},strstr{2}}
libvirt-1.1.0/src/util/virutil.c,virDoubleToStr,strp,def{421},use{330,334,348,351,352,353,433,441,446,450},dvars{tmp,ret},pointers{},cfuncs{va_start{1},memmove{1},strlen{2},va_end{1},virVasprintf{3},strstr{1},virAsprintf{1}}
libvirt-1.1.0/src/util/virutil.c,virHexToBin,c,def{220},use{222,223},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virutil.c,virGetUserConfigDirectory,ret,def{1170},use{1171,1174,1179},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virutil.c,virGetUserConfigDirectory,,def{781,1168,1213},use{1075,1078,1081,1083,1084,1086,1171},dvars{},pointers{},cfuncs{CoTaskMemFree{1},virGetWin32SpecialFolder{2},virGetWin32SpecialFolder{1}}
libvirt-1.1.0/src/util/virutil.c,virGetUserName,ATTRIBUTE_UNUSED,def{1241},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virutil.c,virGetUserName,uid,def{809},use{811},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virutil.c,virGetUserDirectory,p,def{1138,1139,1140},use{1140},dvars{},pointers{dir},cfuncs{}
libvirt-1.1.0/src/util/virutil.c,virGetUserDirectory,ret,def{1123},use{1147,1150,1151,1154,1155,1158,1164},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virutil.c,virGetUserDirectory,dir,def{1122,1125,1131,1145},use{1128,1129,1130,1137,1139,1143,1147},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virutil.c,virGetUserDirectory,,def{753,1120,1204},use{660,701,755,1075,1078,1081,1083,1084,1086,1094,1098,1104,1109,1111,1114,1129,1130,1139,1147,1151,1155,1421,1423,2174,2176,2179,2183,2184,2185,2194,2198,2199,2200,2201,2203,2204,2209,2210,2212,2213,2214,2217,2218,2220,2226,2227,2228,2230,2235,2236,2237,2238,2241},dvars{},pointers{},cfuncs{strcpy{1},virGetWin32DirectoryRoot{1},VIR_STRDUP{1},VIR_STRDUP{2},virGetWin32SpecialFolder{2},virGetWin32SpecialFolder{1},virFileSkipRoot{1},strchr{1},virGetUserEnt{0},virGetUserEnt{2},virFileExists{1},CoTaskMemFree{1},virFileIsAbsPath{1}}
libvirt-1.1.0/src/util/virutil.c,virSetUIDGID,ATTRIBUTE_UNUSED,def{1269,1270},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virutil.c,virSetUIDGID,errno,def{1066},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virutil.c,virSetUIDGID,rc,def{1011,1022},use{1031,1032},dvars{virReportSystemErrorerr},pointers{},cfuncs{virReportSystemError{1}}
libvirt-1.1.0/src/util/virutil.c,virSetUIDGID,bufsize,def{1010,1013,1015},use{1014,1015,1017,1022,1024},dvars{rc},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virutil.c,virSetUIDGID,pwd_result,def{1009},use{1023,1037},dvars{rc},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virutil.c,virSetUIDGID,pwd,def{1009},use{1022,1046,1049},dvars{virReportSystemErrorerr,rc},pointers{},cfuncs{virReportSystemError{3},virReportSystemError{2}}
libvirt-1.1.0/src/util/virutil.c,virSetUIDGID,err,def{995,1019,1026,1042},use{1000,1032,1047,1054,1066},dvars{errno},pointers{},cfuncs{virReportSystemError{1}}
libvirt-1.1.0/src/util/virutil.c,virSetUIDGID,virReportSystemErrorerr,def{1000,1032,1047,1054},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virutil.c,virSetUIDGID,buf,def{996},use{1017,1022,1024,1061,1065},dvars{rc},pointers{},cfuncs{VIR_FREE{1}}
libvirt-1.1.0/src/util/virutil.c,virSetUIDGID,gid,def{993},use{998,999,1002},dvars{virReportSystemErrorerr},pointers{},cfuncs{virReportSystemError{2}}
libvirt-1.1.0/src/util/virutil.c,virSetUIDGID,uid,def{993},use{1007,1022,1033,1041,1053,1056},dvars{virReportSystemErrorerr,rc},pointers{},cfuncs{virReportError{2},virReportSystemError{2}}
libvirt-1.1.0/src/util/virutil.c,virGetHostname,info,def{595},use{135,157,329,348,350,353,354,623,632,634,635,643,645},dvars{r},pointers{},cfuncs{free {1},VIR_STRDUP{2},sa_assert{1},freeaddrinfo{1},getaddrinfo{4}}
libvirt-1.1.0/src/util/virutil.c,virGetHostname,result,def{594},use{612,627,640,643,648,650},dvars{},pointers{},cfuncs{VIR_STRDUP{1}}
libvirt-1.1.0/src/util/virutil.c,virGetHostname,hints,def{595,621,622},use{241,245,247,253,255,256,265,269,271,277,279,280,620,623},dvars{tmp,r},pointers{},cfuncs{memcpy {3},memcpy {1},getaddrinfo{3},memset{4},memset{1}}
libvirt-1.1.0/src/util/virutil.c,virGetHostname,hostname,def{594},use{42,49,52,53,55,57,292,294,296,298,597,603,605,612,623,626,627,640},dvars{r,namer},pointers{},cfuncs{strdup {1},VIR_WARN{2},strncpy {1},strncpy {3},getaddrinfo{1},VIR_STRDUP{2},NUL_TERMINATE{1},strcpy {1},gethostname{3},gethostname{1}}
libvirt-1.1.0/src/util/virutil.c,virGetHostname,namer,def{597},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virutil.c,virGetHostname,r,def{593,623},use{80,84,598,624,626},dvars{},pointers{},cfuncs{gai_strerror{3}}
libvirt-1.1.0/src/util/virutil.c,virGetHostname,,def{591},use{605,635},dvars{},pointers{},cfuncs{strchr{1},STRPREFIX{1}}
libvirt-1.1.0/src/util/virutil.c,virPipeReadUntilEOF,size,def{160,194},use{195,199},dvars{},pointers{},cfuncs{memmove{1}}
libvirt-1.1.0/src/util/virutil.c,virPipeReadUntilEOF,errfd,def{134},use{145},dvars{fds},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virutil.c,virPipeReadUntilEOF,outbuf,def{135},use{193,213},dvars{},pointers{},cfuncs{VIR_FREE{1}}
libvirt-1.1.0/src/util/virutil.c,virPipeReadUntilEOF,got,def{160,176},use{178,181,185,195,199},dvars{},pointers{},cfuncs{memmove{3}}
libvirt-1.1.0/src/util/virutil.c,virPipeReadUntilEOF,errbuf,def{135},use{193,214},dvars{},pointers{},cfuncs{VIR_FREE{1}}
libvirt-1.1.0/src/util/virutil.c,virPipeReadUntilEOF,buf,def{159,193,200},use{194,195,199,200},dvars{size},pointers{},cfuncs{memmove{1},strlen{1}}
libvirt-1.1.0/src/util/virutil.c,virPipeReadUntilEOF,blockingvirSetBlockingfdfalsevirSetInheritfdfalsefds,def{141},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virutil.c,virPipeReadUntilEOF,fds,def{137,142,143,145,146,147},use{143,147,152,158,162,164,167,168,176,193},dvars{buf,got},pointers{},cfuncs{read{1}}
libvirt-1.1.0/src/util/virutil.c,virPipeReadUntilEOF,data,def{159},use{176,178,199},dvars{got},pointers{},cfuncs{memmove{2},read{4},read{2}}
libvirt-1.1.0/src/util/virutil.c,virPipeReadUntilEOF,finished,def{139,144,148,165,179,182},use{150},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virutil.c,virPipeReadUntilEOF,i,def{138},use{158},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virutil.c,virPipeReadUntilEOF,outfd,def{134},use{141,193},dvars{buf,blockingvirSetBlockingfdfalsevirSetInheritfdfalsefds},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virutil.c,virEnumToString,ntypes,def{489},use{492},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virutil.c,virEnumToString,type,def{490},use{492},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virutil.c,virEnumToString,types,def{488},use{495},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virutil.c,virCompareLimitUlong,b,def{2064},use{2066,2069},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virutil.c,virCompareLimitUlong,a,def{2064},use{2066,2069},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virutil.c,virStrIsPrint,i,def{1490},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virutil.c,virStrIsPrint,str,def{1488},use{1492,1493},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virutil.c,virSetCloseExec,fd,def{128},use{130},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virutil.c,virParseNumber,c,def{323},use{326,328},dvars{ret},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virutil.c,virParseNumber,cur,def{317},use{319,322,323,329,331},dvars{str,c},pointers{str},cfuncs{}
libvirt-1.1.0/src/util/virutil.c,virParseNumber,ret,def{316,328},use{325,326,332},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virutil.c,virParseNumber,str,def{314,331},use{317},dvars{},pointers{current,p,cur},cfuncs{}
libvirt-1.1.0/src/util/virutil.c,virIndexToDiskName,offset,def{540,550},use{552},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virutil.c,virIndexToDiskName,i,def{540},use{552},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virutil.c,virIndexToDiskName,name,def{539,558,561},use{552,557,558,564},dvars{},pointers{controllerOrBus,unit,i,total,k},cfuncs{strcpy{1}}
libvirt-1.1.0/src/util/virutil.c,virIndexToDiskName,k,def{540},use{548,560,561},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virutil.c,virIndexToDiskName,prefix,def{537},use{550,557},dvars{offset},pointers{prefix},cfuncs{strcpy{2},strlen{1}}
libvirt-1.1.0/src/util/virutil.c,virIndexToDiskName,idx,def{537},use{542,544},dvars{},pointers{},cfuncs{virReportError{2}}
libvirt-1.1.0/src/util/virutil.c,virGetUserEnt,rc,def{668},use{693,694},dvars{},pointers{},cfuncs{virReportSystemError{1}}
libvirt-1.1.0/src/util/virutil.c,virGetUserEnt,strbuflen,def{667,672},use{672,674,686,687},dvars{NULLrc},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virutil.c,virGetUserEnt,val,def{666},use{667,671},dvars{strbuflen},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virutil.c,virGetUserEnt,pw,def{665},use{686,693,702},dvars{NULLrc},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virutil.c,virGetUserEnt,pwbuf,def{664},use{686},dvars{NULLrc},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virutil.c,virGetUserEnt,strbuf,def{662},use{674,686,687,689,697,703},dvars{NULLrc},pointers{},cfuncs{VIR_FREE{1}}
libvirt-1.1.0/src/util/virutil.c,virGetUserEnt,ret,def{663},use{701,704},dvars{},pointers{},cfuncs{VIR_STRDUP{1}}
libvirt-1.1.0/src/util/virutil.c,virGetUserEnt,field,def{660},use{701},dvars{},pointers{},cfuncs{VIR_STRDUP{2}}
libvirt-1.1.0/src/util/virutil.c,virGetUserEnt,NULLrc,def{686},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virutil.c,virGetUserEnt,uid,def{659},use{686,696},dvars{NULLrc},pointers{},cfuncs{virReportSystemError{2}}
libvirt-1.1.0/src/util/virutil.c,virGetUserIDByName,buf,def{851},use{856,1305,1310},dvars{errno},pointers{},cfuncs{virStrerror{6},virStrerror{4}}
libvirt-1.1.0/src/util/virutil.c,virGetUserIDByName,ret,def{831,859,864},use{859,864,869},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virutil.c,virGetUserIDByName,rc,def{830,842},use{186,188,190,192,210,212,213,215,229,232,234,850,856,1303,1308},dvars{len,ret},pointers{},cfuncs{strlen {1},strerror_r {3},strerror_r {2},virStrerror{3},safe_copy {3},strerror_r{3}}
libvirt-1.1.0/src/util/virutil.c,virGetUserIDByName,strbuflen,def{829,835},use{835,837,842,843},dvars{rc},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virutil.c,virGetUserIDByName,val,def{828},use{829,834},dvars{strbuflen},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virutil.c,virGetUserIDByName,name,def{823},use{842,856},dvars{rc},pointers{uid},cfuncs{VIR_WARN{2}}
libvirt-1.1.0/src/util/virutil.c,virGetUserIDByName,pw,def{827},use{842,849,863},dvars{uid,rc},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virutil.c,virGetUserIDByName,strbuf,def{825},use{837,842,843,867},dvars{rc},pointers{user},cfuncs{VIR_FREE{1}}
libvirt-1.1.0/src/util/virutil.c,virGetUserIDByName,pwbuf,def{826},use{842},dvars{rc},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virutil.c,virGetUserIDByName,uid,def{823,863},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virutil.c,virScaleInteger,base,def{256,259,261},use{259,261,270,273,276,279,282,285},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virutil.c,virScaleInteger,limit,def{243},use{294},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virutil.c,virScaleInteger,scale,def{243,254,267},use{246,248,254,267,270,273,276,279,282,285,294,299},dvars{},pointers{},cfuncs{virReportError{2}}
libvirt-1.1.0/src/util/virutil.c,virScaleInteger,suffix,def{242,251},use{245,251,252,253,258,260,264,268,289,296},dvars{},pointers{},cfuncs{virReportError{3},virReportError{2}}
libvirt-1.1.0/src/util/virutil.c,virScaleInteger,value,def{242},use{294,296,299},dvars{},pointers{},cfuncs{virReportError{2}}
libvirt-1.1.0/src/util/virutil.c,virGetUserRuntimeDirectory,ret,def{798},use{800,805},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virutil.c,virGetUserRuntimeDirectory,path,def{793},use{795,800},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virutil.c,virGetUserRuntimeDirectory,,def{791,1198,1231},use{330,334,346,348,351,352,353,800},dvars{ret},pointers{},cfuncs{va_end{1},virVasprintf{3},va_start{1},virAsprintf{3},virAsprintf{1}}
libvirt-1.1.0/src/util/virutil.c,virSetBlocking,blocking,def{120},use{121},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virutil.c,virSetBlocking,fd,def{120},use{121},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virutil.c,virIsCapableFCHost,ATTRIBUTE_UNUSED,def{2012,2013},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virutil.c,virIsCapableFCHost,ret,def{1690,1700},use{1703},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virutil.c,virIsCapableFCHost,sysfs_path,def{1689},use{1692,1699,1702},dvars{},pointers{},cfuncs{VIR_FREE{1}}
libvirt-1.1.0/src/util/virutil.c,virIsCapableFCHost,host,def{1687},use{1694},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virutil.c,virIsCapableFCHost,sysfs_prefix,def{1686},use{1693},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virutil.c,virGetDeviceID,sb,def{1503},use{1505,1508,1512,1514},dvars{min,maj},pointers{},cfuncs{minor{1},major{1}}
libvirt-1.1.0/src/util/virutil.c,virGetDeviceID,min,def{1501,1514},use{1513},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virutil.c,virGetDeviceID,ATTRIBUTE_UNUSED,def{1520,1521,1522},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virutil.c,virGetDeviceID,maj,def{1501,1512},use{1511},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virutil.c,virGetDeviceID,path,def{1501},use{1505},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virutil.c,virGetWin32SpecialFolder,ret,def{1079,1085},use{1085,1088},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virutil.c,virGetWin32SpecialFolder,pidl,def{1078},use{1083,1084,1086},dvars{},pointers{},cfuncs{CoTaskMemFree{1}}
libvirt-1.1.0/src/util/virutil.c,virGetWin32SpecialFolder,buf,def{1077},use{1084},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virutil.c,virGetWin32SpecialFolder,path,def{1075,1081},use{1084},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virutil.c,virGetWin32SpecialFolder,csidl,def{1075},use{1083},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virutil.c,virParseVersionString,tmp,def{356},use{358,361,364,367,370},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virutil.c,virParseVersionString,micro,def{355},use{370,373,376},dvars{version},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virutil.c,virParseVersionString,major,def{355},use{358,373,376},dvars{version},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virutil.c,virParseVersionString,version,def{352,376},use{},dvars{},pointers{,version},cfuncs{}
libvirt-1.1.0/src/util/virutil.c,virParseVersionString,minor,def{355},use{364,373,376},dvars{version},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virutil.c,virParseVersionString,allowMissing,def{353},use{361,367},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virutil.c,virParseVersionString,str,def{352},use{358},dvars{},pointers{},cfuncs{}
