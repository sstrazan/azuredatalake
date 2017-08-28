#pragma warning( disable : 4100 )
#pragma warning( disable : 4127 )
#pragma warning( disable : 4189 )
#pragma warning( disable : 4355 )
#pragma warning( disable : 4503 )
#pragma warning( disable : 4512 )
#pragma warning( disable:  4651 )
#pragma warning( disable : 4691 )
#pragma warning( disable : 4723 )
#pragma warning( disable : 4702 )
#define SCOPE_NO_UDT
#if defined(COMPILE_NATIVE)
#include "ScopeCommonError.h"
#include "ScopeError.h"
#include "ScopeOperators.h"
#endif
#if defined(COMPILE_MANAGED)
#using <mscorlib.dll>
[assembly: System::Runtime::Versioning::TargetFrameworkAttribute(".NETFramework,Version=v4.5", FrameworkDisplayName = ".NET Framework, Version 4.5")];
#include "ScopeCommonError.h"
#include "SqlManaged.h"
#endif
#if defined(COMPILE_NATIVE)
#endif
using namespace ScopeEngine;
enum OperatorUID
{
UID_Extract_0 = 1,
UID_Extract_0_Data0 = 2,
UID_Process_1 = 3,
UID_Process_1_Data0 = 4,
UID_Process_2 = 5,
UID_SV1_Extract_out0 = 6,
UID_Extract_3 = 7,
UID_Extract_3_Data0 = 8,
UID_Process_4 = 9,
UID_Process_4_Data0 = 10,
UID_Process_5 = 11,
UID_Process_5_Data0 = 12,
UID_Process_6 = 13,
UID_Process_6_Data0 = 14,
UID_Process_7 = 15,
UID_Process_7_Data0 = 16,
UID_Process_8 = 17,
UID_SV2_Extract_out0 = 18,
UID_Join_9 = 19,
UID_Join_9_Data0 = 20,
UID_Process_10 = 21,
UID_Process_10_Data0 = 22,
UID_Process_11 = 23,
UID_Process_11_Data0 = 24,
UID_Process_12 = 25,
UID_Process_12_Data0 = 26,
UID_SV3_Combine_out0 = 27,
UID_Join_9_0,
UID_Join_9_1,
UID_Process_2_Prefix,
UID_Process_6_Prefix,
UID_Process_11_Prefix,
UID_ParallelUnionAll_Process_1,
UID_ParallelUnionAll_Process_4
};
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


//namespace ScopeGeneratedClasses
//{
    // IDs representing UDTs to be used in native code
    enum UserDefinedTypeId
    {
        
    };

#if defined(COMPILE_MANAGED)
// Explicit instantiations for templated functions that are defined in managed code
#endif // defined(COMPILE_MANAGED)


    class Extract_0_Data0
    {
    public:
        int m_MovieId;
        FString m_Title;
        ScopeDateTime m_ReleaseDate;
        NativeNullable<ScopeDateTime> m_VideoReleaseDate;
        FString m_IMDbURL;
        bool m_GenreUnknown;
        bool m_GenreAction;
        bool m_GenreAdventure;
        bool m_GenreAnimation;
        bool m_GenreChildrens;
        bool m_GenreComedy;
        bool m_GenreCrime;
        bool m_GenreDocumentary;
        bool m_GenreDrama;
        bool m_GenreFantasy;
        bool m_GenreNoire;
        bool m_GenreHorror;
        bool m_GenreMusical;
        bool m_GenreMystery;
        bool m_GenreRomance;
        bool m_GenreSciFi;
        bool m_GenreThriller;
        bool m_GenreWar;
        bool m_GenreWestern;
        Extract_0_Data0();
        Extract_0_Data0(const Extract_0_Data0 & c, IncrementalAllocator * alloc);

        template <typename Allocator>
        Extract_0_Data0(const Extract_0_Data0 & c, FixedArrayTypeMemoryManager<Allocator> * mmng);

        template <typename Allocator>
        void Delete(FixedArrayTypeMemoryManager<Allocator> * mmng);



        static const bool containsUDT = false;

        UINT8 GetScopeCEPEventType() const { return 0; }
        ScopeDateTime GetScopeCEPEventStartTime() const { return ScopeDateTime::MinValue; }
        void SetScopeCEPEventStartTime(ScopeDateTime& startTime) {}
        void SetScopeCEPEventType(int type) {}
        bool IsScopeCEPCTI() const { return false; }
        void ResetScopeCEPStatus(ScopeDateTime startTime, ScopeDateTime endTime, int type) { }
        
#if defined(SCOPE_DEBUG)
        friend ostream & operator<<(ostream & os, Extract_0_Data0 & row);
#endif // defined(SCOPE_DEBUG)
    };

#if defined(SCOPE_DEBUG)
    INLINE ostream & operator<<(ostream & os, Extract_0_Data0 & row)
    {
        os << "\t" << std::string{ u8"MovieId" } << ":\t" << row.m_MovieId << endl;
        os << "\t" << std::string{ u8"Title" } << ":\t" << row.m_Title << endl;
        os << "\t" << std::string{ u8"ReleaseDate" } << ":\t" << row.m_ReleaseDate << endl;
        os << "\t" << std::string{ u8"VideoReleaseDate" } << ":\t" << row.m_VideoReleaseDate << endl;
        os << "\t" << std::string{ u8"IMDbURL" } << ":\t" << row.m_IMDbURL << endl;
        os << "\t" << std::string{ u8"GenreUnknown" } << ":\t" << row.m_GenreUnknown << endl;
        os << "\t" << std::string{ u8"GenreAction" } << ":\t" << row.m_GenreAction << endl;
        os << "\t" << std::string{ u8"GenreAdventure" } << ":\t" << row.m_GenreAdventure << endl;
        os << "\t" << std::string{ u8"GenreAnimation" } << ":\t" << row.m_GenreAnimation << endl;
        os << "\t" << std::string{ u8"GenreChildrens" } << ":\t" << row.m_GenreChildrens << endl;
        os << "\t" << std::string{ u8"GenreComedy" } << ":\t" << row.m_GenreComedy << endl;
        os << "\t" << std::string{ u8"GenreCrime" } << ":\t" << row.m_GenreCrime << endl;
        os << "\t" << std::string{ u8"GenreDocumentary" } << ":\t" << row.m_GenreDocumentary << endl;
        os << "\t" << std::string{ u8"GenreDrama" } << ":\t" << row.m_GenreDrama << endl;
        os << "\t" << std::string{ u8"GenreFantasy" } << ":\t" << row.m_GenreFantasy << endl;
        os << "\t" << std::string{ u8"GenreNoire" } << ":\t" << row.m_GenreNoire << endl;
        os << "\t" << std::string{ u8"GenreHorror" } << ":\t" << row.m_GenreHorror << endl;
        os << "\t" << std::string{ u8"GenreMusical" } << ":\t" << row.m_GenreMusical << endl;
        os << "\t" << std::string{ u8"GenreMystery" } << ":\t" << row.m_GenreMystery << endl;
        os << "\t" << std::string{ u8"GenreRomance" } << ":\t" << row.m_GenreRomance << endl;
        os << "\t" << std::string{ u8"GenreSciFi" } << ":\t" << row.m_GenreSciFi << endl;
        os << "\t" << std::string{ u8"GenreThriller" } << ":\t" << row.m_GenreThriller << endl;
        os << "\t" << std::string{ u8"GenreWar" } << ":\t" << row.m_GenreWar << endl;
        os << "\t" << std::string{ u8"GenreWestern" } << ":\t" << row.m_GenreWestern << endl;
        return os;
    }
#endif // defined(SCOPE_DEBUG)


    class Process_1_Data0
    {
    public:
        int m_MovieId;
        FString m_Title;
        Process_1_Data0();
        Process_1_Data0(const Process_1_Data0 & c, IncrementalAllocator * alloc);

        template <typename Allocator>
        Process_1_Data0(const Process_1_Data0 & c, FixedArrayTypeMemoryManager<Allocator> * mmng);

        template <typename Allocator>
        void Delete(FixedArrayTypeMemoryManager<Allocator> * mmng);



        static const bool containsUDT = false;

        UINT8 GetScopeCEPEventType() const { return 0; }
        ScopeDateTime GetScopeCEPEventStartTime() const { return ScopeDateTime::MinValue; }
        void SetScopeCEPEventStartTime(ScopeDateTime& startTime) {}
        void SetScopeCEPEventType(int type) {}
        bool IsScopeCEPCTI() const { return false; }
        void ResetScopeCEPStatus(ScopeDateTime startTime, ScopeDateTime endTime, int type) { }
        
#if defined(SCOPE_DEBUG)
        friend ostream & operator<<(ostream & os, Process_1_Data0 & row);
#endif // defined(SCOPE_DEBUG)
    };

#if defined(SCOPE_DEBUG)
    INLINE ostream & operator<<(ostream & os, Process_1_Data0 & row)
    {
        os << "\t" << std::string{ u8"MovieId" } << ":\t" << row.m_MovieId << endl;
        os << "\t" << std::string{ u8"Title" } << ":\t" << row.m_Title << endl;
        return os;
    }
#endif // defined(SCOPE_DEBUG)


    class Extract_3_Data0
    {
    public:
        int m_UserId;
        int m_MovieId;
        int m_Rating;
        double m_Timestamp;
        Extract_3_Data0();
        Extract_3_Data0(const Extract_3_Data0 & c, IncrementalAllocator * alloc);

        template <typename Allocator>
        Extract_3_Data0(const Extract_3_Data0 & c, FixedArrayTypeMemoryManager<Allocator> * mmng);

        template <typename Allocator>
        void Delete(FixedArrayTypeMemoryManager<Allocator> * mmng);



        static const bool containsUDT = false;

        UINT8 GetScopeCEPEventType() const { return 0; }
        ScopeDateTime GetScopeCEPEventStartTime() const { return ScopeDateTime::MinValue; }
        void SetScopeCEPEventStartTime(ScopeDateTime& startTime) {}
        void SetScopeCEPEventType(int type) {}
        bool IsScopeCEPCTI() const { return false; }
        void ResetScopeCEPStatus(ScopeDateTime startTime, ScopeDateTime endTime, int type) { }
        
#if defined(SCOPE_DEBUG)
        friend ostream & operator<<(ostream & os, Extract_3_Data0 & row);
#endif // defined(SCOPE_DEBUG)
    };

#if defined(SCOPE_DEBUG)
    INLINE ostream & operator<<(ostream & os, Extract_3_Data0 & row)
    {
        os << "\t" << std::string{ u8"UserId" } << ":\t" << row.m_UserId << endl;
        os << "\t" << std::string{ u8"MovieId" } << ":\t" << row.m_MovieId << endl;
        os << "\t" << std::string{ u8"Rating" } << ":\t" << row.m_Rating << endl;
        os << "\t" << std::string{ u8"Timestamp" } << ":\t" << row.m_Timestamp << endl;
        return os;
    }
#endif // defined(SCOPE_DEBUG)


    class Process_4_Data0
    {
    public:
        int m_MovieId;
        __int64 m_partialagg2__;
        NativeNullable<ScopeDecimal> m_partialagg3__;
        __int64 m_partialagg4__;
        Process_4_Data0();
        Process_4_Data0(const Process_4_Data0 & c, IncrementalAllocator * alloc);

        template <typename Allocator>
        Process_4_Data0(const Process_4_Data0 & c, FixedArrayTypeMemoryManager<Allocator> * mmng);

        template <typename Allocator>
        void Delete(FixedArrayTypeMemoryManager<Allocator> * mmng);



        static const bool containsUDT = false;

        UINT8 GetScopeCEPEventType() const { return 0; }
        ScopeDateTime GetScopeCEPEventStartTime() const { return ScopeDateTime::MinValue; }
        void SetScopeCEPEventStartTime(ScopeDateTime& startTime) {}
        void SetScopeCEPEventType(int type) {}
        bool IsScopeCEPCTI() const { return false; }
        void ResetScopeCEPStatus(ScopeDateTime startTime, ScopeDateTime endTime, int type) { }
        
#if defined(SCOPE_DEBUG)
        friend ostream & operator<<(ostream & os, Process_4_Data0 & row);
#endif // defined(SCOPE_DEBUG)
    };

#if defined(SCOPE_DEBUG)
    INLINE ostream & operator<<(ostream & os, Process_4_Data0 & row)
    {
        os << "\t" << std::string{ u8"MovieId" } << ":\t" << row.m_MovieId << endl;
        os << "\t" << std::string{ u8"partialagg2__" } << ":\t" << row.m_partialagg2__ << endl;
        os << "\t" << std::string{ u8"partialagg3__" } << ":\t" << row.m_partialagg3__ << endl;
        os << "\t" << std::string{ u8"partialagg4__" } << ":\t" << row.m_partialagg4__ << endl;
        return os;
    }
#endif // defined(SCOPE_DEBUG)


    class HashAggregatorKey_Process_5
    {
    public:
        int m_MovieId;
        HashAggregatorKey_Process_5();
        HashAggregatorKey_Process_5(const HashAggregatorKey_Process_5 & c, IncrementalAllocator * alloc);

        template <typename Allocator>
        HashAggregatorKey_Process_5(const HashAggregatorKey_Process_5 & c, FixedArrayTypeMemoryManager<Allocator> * mmng);

        template <typename Allocator>
        void Delete(FixedArrayTypeMemoryManager<Allocator> * mmng);



        static const bool containsUDT = false;

        UINT8 GetScopeCEPEventType() const { return 0; }
        ScopeDateTime GetScopeCEPEventStartTime() const { return ScopeDateTime::MinValue; }
        void SetScopeCEPEventStartTime(ScopeDateTime& startTime) {}
        void SetScopeCEPEventType(int type) {}
        bool IsScopeCEPCTI() const { return false; }
        void ResetScopeCEPStatus(ScopeDateTime startTime, ScopeDateTime endTime, int type) { }
        
#if defined(SCOPE_DEBUG)
        friend ostream & operator<<(ostream & os, HashAggregatorKey_Process_5 & row);
#endif // defined(SCOPE_DEBUG)
    };

#if defined(SCOPE_DEBUG)
    INLINE ostream & operator<<(ostream & os, HashAggregatorKey_Process_5 & row)
    {
        os << "\t" << std::string{ u8"MovieId" } << ":\t" << row.m_MovieId << endl;
        return os;
    }
#endif // defined(SCOPE_DEBUG)


    class HashAggregatorState_Process_5
    {
    public:
        __int64 m_UNCHECKED_SUM_partialagg2__;
        ScopeDecimal m_SUM_partialagg3__;
        bool m_SUM_fEmpty_partialagg3__;
        __int64 m_UNCHECKED_SUM_partialagg4__;
        HashAggregatorState_Process_5();
        HashAggregatorState_Process_5(const HashAggregatorState_Process_5 & c, IncrementalAllocator * alloc);

        template <typename Allocator>
        HashAggregatorState_Process_5(const HashAggregatorState_Process_5 & c, FixedArrayTypeMemoryManager<Allocator> * mmng);

        template <typename Allocator>
        void Delete(FixedArrayTypeMemoryManager<Allocator> * mmng);



        static const bool containsUDT = false;

        UINT8 GetScopeCEPEventType() const { return 0; }
        ScopeDateTime GetScopeCEPEventStartTime() const { return ScopeDateTime::MinValue; }
        void SetScopeCEPEventStartTime(ScopeDateTime& startTime) {}
        void SetScopeCEPEventType(int type) {}
        bool IsScopeCEPCTI() const { return false; }
        void ResetScopeCEPStatus(ScopeDateTime startTime, ScopeDateTime endTime, int type) { }
        
#if defined(SCOPE_DEBUG)
        friend ostream & operator<<(ostream & os, HashAggregatorState_Process_5 & row);
#endif // defined(SCOPE_DEBUG)
    };

#if defined(SCOPE_DEBUG)
    INLINE ostream & operator<<(ostream & os, HashAggregatorState_Process_5 & row)
    {
        os << "\t" << std::string{ u8"UNCHECKED_SUM_partialagg2__" } << ":\t" << row.m_UNCHECKED_SUM_partialagg2__ << endl;
        os << "\t" << std::string{ u8"SUM_partialagg3__" } << ":\t" << row.m_SUM_partialagg3__ << endl;
        os << "\t" << std::string{ u8"SUM_fEmpty_partialagg3__" } << ":\t" << row.m_SUM_fEmpty_partialagg3__ << endl;
        os << "\t" << std::string{ u8"UNCHECKED_SUM_partialagg4__" } << ":\t" << row.m_UNCHECKED_SUM_partialagg4__ << endl;
        return os;
    }
#endif // defined(SCOPE_DEBUG)


    class SV2_Extract_out0
    {
    public:
        NativeNullable<__int64> m_NumberOfRatings;
        ScopeDecimal m_AvgRating;
        int m_MovieId1;
        SV2_Extract_out0();
        SV2_Extract_out0(const SV2_Extract_out0 & c, IncrementalAllocator * alloc);

        template <typename Allocator>
        SV2_Extract_out0(const SV2_Extract_out0 & c, FixedArrayTypeMemoryManager<Allocator> * mmng);

        template <typename Allocator>
        void Delete(FixedArrayTypeMemoryManager<Allocator> * mmng);



        static const bool containsUDT = false;

        UINT8 GetScopeCEPEventType() const { return 0; }
        ScopeDateTime GetScopeCEPEventStartTime() const { return ScopeDateTime::MinValue; }
        void SetScopeCEPEventStartTime(ScopeDateTime& startTime) {}
        void SetScopeCEPEventType(int type) {}
        bool IsScopeCEPCTI() const { return false; }
        void ResetScopeCEPStatus(ScopeDateTime startTime, ScopeDateTime endTime, int type) { }
        
#if defined(SCOPE_DEBUG)
        friend ostream & operator<<(ostream & os, SV2_Extract_out0 & row);
#endif // defined(SCOPE_DEBUG)
    };

#if defined(SCOPE_DEBUG)
    INLINE ostream & operator<<(ostream & os, SV2_Extract_out0 & row)
    {
        os << "\t" << std::string{ u8"NumberOfRatings" } << ":\t" << row.m_NumberOfRatings << endl;
        os << "\t" << std::string{ u8"AvgRating" } << ":\t" << row.m_AvgRating << endl;
        os << "\t" << std::string{ u8"MovieId1" } << ":\t" << row.m_MovieId1 << endl;
        return os;
    }
#endif // defined(SCOPE_DEBUG)


    class Join_9_Data0
    {
    public:
        int m_MovieId;
        FString m_Title;
        NativeNullable<__int64> m_NumberOfRatings;
        ScopeDecimal m_AvgRating;
        Join_9_Data0();
        Join_9_Data0(const Join_9_Data0 & c, IncrementalAllocator * alloc);

        template <typename Allocator>
        Join_9_Data0(const Join_9_Data0 & c, FixedArrayTypeMemoryManager<Allocator> * mmng);

        template <typename Allocator>
        void Delete(FixedArrayTypeMemoryManager<Allocator> * mmng);



        static const bool containsUDT = false;

        UINT8 GetScopeCEPEventType() const { return 0; }
        ScopeDateTime GetScopeCEPEventStartTime() const { return ScopeDateTime::MinValue; }
        void SetScopeCEPEventStartTime(ScopeDateTime& startTime) {}
        void SetScopeCEPEventType(int type) {}
        bool IsScopeCEPCTI() const { return false; }
        void ResetScopeCEPStatus(ScopeDateTime startTime, ScopeDateTime endTime, int type) { }
        
#if defined(SCOPE_DEBUG)
        friend ostream & operator<<(ostream & os, Join_9_Data0 & row);
#endif // defined(SCOPE_DEBUG)
    };

#if defined(SCOPE_DEBUG)
    INLINE ostream & operator<<(ostream & os, Join_9_Data0 & row)
    {
        os << "\t" << std::string{ u8"MovieId" } << ":\t" << row.m_MovieId << endl;
        os << "\t" << std::string{ u8"Title" } << ":\t" << row.m_Title << endl;
        os << "\t" << std::string{ u8"NumberOfRatings" } << ":\t" << row.m_NumberOfRatings << endl;
        os << "\t" << std::string{ u8"AvgRating" } << ":\t" << row.m_AvgRating << endl;
        return os;
    }
#endif // defined(SCOPE_DEBUG)


    class Process_10_Data0
    {
    public:
        FString m_Title;
        NativeNullable<__int64> m_NumberOfRatings;
        ScopeDecimal m_AvgRating;
        int m_InfoMovieId;
        Process_10_Data0();
        Process_10_Data0(const Process_10_Data0 & c, IncrementalAllocator * alloc);

        template <typename Allocator>
        Process_10_Data0(const Process_10_Data0 & c, FixedArrayTypeMemoryManager<Allocator> * mmng);

        template <typename Allocator>
        void Delete(FixedArrayTypeMemoryManager<Allocator> * mmng);



        static const bool containsUDT = false;

        UINT8 GetScopeCEPEventType() const { return 0; }
        ScopeDateTime GetScopeCEPEventStartTime() const { return ScopeDateTime::MinValue; }
        void SetScopeCEPEventStartTime(ScopeDateTime& startTime) {}
        void SetScopeCEPEventType(int type) {}
        bool IsScopeCEPCTI() const { return false; }
        void ResetScopeCEPStatus(ScopeDateTime startTime, ScopeDateTime endTime, int type) { }
        
#if defined(SCOPE_DEBUG)
        friend ostream & operator<<(ostream & os, Process_10_Data0 & row);
#endif // defined(SCOPE_DEBUG)
    };

#if defined(SCOPE_DEBUG)
    INLINE ostream & operator<<(ostream & os, Process_10_Data0 & row)
    {
        os << "\t" << std::string{ u8"Title" } << ":\t" << row.m_Title << endl;
        os << "\t" << std::string{ u8"NumberOfRatings" } << ":\t" << row.m_NumberOfRatings << endl;
        os << "\t" << std::string{ u8"AvgRating" } << ":\t" << row.m_AvgRating << endl;
        os << "\t" << std::string{ u8"InfoMovieId" } << ":\t" << row.m_InfoMovieId << endl;
        return os;
    }
#endif // defined(SCOPE_DEBUG)


    class Process_12_Data0
    {
    public:
        int m_InfoMovieId;
        FString m_Title;
        NativeNullable<__int64> m_NumberOfRatings;
        ScopeDecimal m_AvgRating;
        Process_12_Data0();
        Process_12_Data0(const Process_12_Data0 & c, IncrementalAllocator * alloc);

        template <typename Allocator>
        Process_12_Data0(const Process_12_Data0 & c, FixedArrayTypeMemoryManager<Allocator> * mmng);

        template <typename Allocator>
        void Delete(FixedArrayTypeMemoryManager<Allocator> * mmng);



        static const bool containsUDT = false;

        UINT8 GetScopeCEPEventType() const { return 0; }
        ScopeDateTime GetScopeCEPEventStartTime() const { return ScopeDateTime::MinValue; }
        void SetScopeCEPEventStartTime(ScopeDateTime& startTime) {}
        void SetScopeCEPEventType(int type) {}
        bool IsScopeCEPCTI() const { return false; }
        void ResetScopeCEPStatus(ScopeDateTime startTime, ScopeDateTime endTime, int type) { }
        
#if defined(SCOPE_DEBUG)
        friend ostream & operator<<(ostream & os, Process_12_Data0 & row);
#endif // defined(SCOPE_DEBUG)
    };

#if defined(SCOPE_DEBUG)
    INLINE ostream & operator<<(ostream & os, Process_12_Data0 & row)
    {
        os << "\t" << std::string{ u8"InfoMovieId" } << ":\t" << row.m_InfoMovieId << endl;
        os << "\t" << std::string{ u8"Title" } << ":\t" << row.m_Title << endl;
        os << "\t" << std::string{ u8"NumberOfRatings" } << ":\t" << row.m_NumberOfRatings << endl;
        os << "\t" << std::string{ u8"AvgRating" } << ":\t" << row.m_AvgRating << endl;
        return os;
    }
#endif // defined(SCOPE_DEBUG)


#if defined(COMPILE_MANAGED)
    template<>
    struct ManagedRow<Extract_0_Data0>
    {
        cli::array<ScopeEngineManaged::ColumnOffsetId>^ ColumnOffsets()
        {
            cli::array<ScopeEngineManaged::ColumnOffsetId>^ offset = gcnew cli::array<ScopeEngineManaged::ColumnOffsetId>(24);            
            offset[0] = ColumnOffsetId(offsetof(Extract_0_Data0, m_MovieId), T_Integer);
            offset[1] = ColumnOffsetId(offsetof(Extract_0_Data0, m_Title), T_String);
            offset[2] = ColumnOffsetId(offsetof(Extract_0_Data0, m_ReleaseDate), T_DateTime);
            offset[3] = ColumnOffsetId(offsetof(Extract_0_Data0, m_VideoReleaseDate), T_DateTimeQ);
            offset[4] = ColumnOffsetId(offsetof(Extract_0_Data0, m_IMDbURL), T_String);
            offset[5] = ColumnOffsetId(offsetof(Extract_0_Data0, m_GenreUnknown), T_Boolean);
            offset[6] = ColumnOffsetId(offsetof(Extract_0_Data0, m_GenreAction), T_Boolean);
            offset[7] = ColumnOffsetId(offsetof(Extract_0_Data0, m_GenreAdventure), T_Boolean);
            offset[8] = ColumnOffsetId(offsetof(Extract_0_Data0, m_GenreAnimation), T_Boolean);
            offset[9] = ColumnOffsetId(offsetof(Extract_0_Data0, m_GenreChildrens), T_Boolean);
            offset[10] = ColumnOffsetId(offsetof(Extract_0_Data0, m_GenreComedy), T_Boolean);
            offset[11] = ColumnOffsetId(offsetof(Extract_0_Data0, m_GenreCrime), T_Boolean);
            offset[12] = ColumnOffsetId(offsetof(Extract_0_Data0, m_GenreDocumentary), T_Boolean);
            offset[13] = ColumnOffsetId(offsetof(Extract_0_Data0, m_GenreDrama), T_Boolean);
            offset[14] = ColumnOffsetId(offsetof(Extract_0_Data0, m_GenreFantasy), T_Boolean);
            offset[15] = ColumnOffsetId(offsetof(Extract_0_Data0, m_GenreNoire), T_Boolean);
            offset[16] = ColumnOffsetId(offsetof(Extract_0_Data0, m_GenreHorror), T_Boolean);
            offset[17] = ColumnOffsetId(offsetof(Extract_0_Data0, m_GenreMusical), T_Boolean);
            offset[18] = ColumnOffsetId(offsetof(Extract_0_Data0, m_GenreMystery), T_Boolean);
            offset[19] = ColumnOffsetId(offsetof(Extract_0_Data0, m_GenreRomance), T_Boolean);
            offset[20] = ColumnOffsetId(offsetof(Extract_0_Data0, m_GenreSciFi), T_Boolean);
            offset[21] = ColumnOffsetId(offsetof(Extract_0_Data0, m_GenreThriller), T_Boolean);
            offset[22] = ColumnOffsetId(offsetof(Extract_0_Data0, m_GenreWar), T_Boolean);
            offset[23] = ColumnOffsetId(offsetof(Extract_0_Data0, m_GenreWestern), T_Boolean);
            return offset;        
        }

        cli::array<ScopeEngineManaged::SqlIpColumn^>^ Columns(cli::array<String^>^ readOnlyColumns)
        {
            cli::array<ScopeEngineManaged::SqlIpColumn^>^ c = gcnew cli::array<ScopeEngineManaged::SqlIpColumn^>(24);
            c[0] = gcnew ScopeEngineManaged::SqlIpColumn(gcnew System::String("MovieId"), System::Int32::typeid, readOnlyColumns == nullptr ? false : Array::IndexOf(readOnlyColumns, gcnew System::String("MovieId")) >= 0, /*isSystem*/false);
            c[1] = gcnew ScopeEngineManaged::SqlIpColumn(gcnew System::String("Title"), System::String::typeid, readOnlyColumns == nullptr ? false : Array::IndexOf(readOnlyColumns, gcnew System::String("Title")) >= 0, /*isSystem*/false);
            c[2] = gcnew ScopeEngineManaged::SqlIpColumn(gcnew System::String("ReleaseDate"), System::DateTime::typeid, readOnlyColumns == nullptr ? false : Array::IndexOf(readOnlyColumns, gcnew System::String("ReleaseDate")) >= 0, /*isSystem*/false);
            c[3] = gcnew ScopeEngineManaged::SqlIpColumn(gcnew System::String("VideoReleaseDate"), System::Nullable<System::DateTime>::typeid, readOnlyColumns == nullptr ? false : Array::IndexOf(readOnlyColumns, gcnew System::String("VideoReleaseDate")) >= 0, /*isSystem*/false);
            c[4] = gcnew ScopeEngineManaged::SqlIpColumn(gcnew System::String("IMDbURL"), System::String::typeid, readOnlyColumns == nullptr ? false : Array::IndexOf(readOnlyColumns, gcnew System::String("IMDbURL")) >= 0, /*isSystem*/false);
            c[5] = gcnew ScopeEngineManaged::SqlIpColumn(gcnew System::String("GenreUnknown"), System::Boolean::typeid, readOnlyColumns == nullptr ? false : Array::IndexOf(readOnlyColumns, gcnew System::String("GenreUnknown")) >= 0, /*isSystem*/false);
            c[6] = gcnew ScopeEngineManaged::SqlIpColumn(gcnew System::String("GenreAction"), System::Boolean::typeid, readOnlyColumns == nullptr ? false : Array::IndexOf(readOnlyColumns, gcnew System::String("GenreAction")) >= 0, /*isSystem*/false);
            c[7] = gcnew ScopeEngineManaged::SqlIpColumn(gcnew System::String("GenreAdventure"), System::Boolean::typeid, readOnlyColumns == nullptr ? false : Array::IndexOf(readOnlyColumns, gcnew System::String("GenreAdventure")) >= 0, /*isSystem*/false);
            c[8] = gcnew ScopeEngineManaged::SqlIpColumn(gcnew System::String("GenreAnimation"), System::Boolean::typeid, readOnlyColumns == nullptr ? false : Array::IndexOf(readOnlyColumns, gcnew System::String("GenreAnimation")) >= 0, /*isSystem*/false);
            c[9] = gcnew ScopeEngineManaged::SqlIpColumn(gcnew System::String("GenreChildrens"), System::Boolean::typeid, readOnlyColumns == nullptr ? false : Array::IndexOf(readOnlyColumns, gcnew System::String("GenreChildrens")) >= 0, /*isSystem*/false);
            c[10] = gcnew ScopeEngineManaged::SqlIpColumn(gcnew System::String("GenreComedy"), System::Boolean::typeid, readOnlyColumns == nullptr ? false : Array::IndexOf(readOnlyColumns, gcnew System::String("GenreComedy")) >= 0, /*isSystem*/false);
            c[11] = gcnew ScopeEngineManaged::SqlIpColumn(gcnew System::String("GenreCrime"), System::Boolean::typeid, readOnlyColumns == nullptr ? false : Array::IndexOf(readOnlyColumns, gcnew System::String("GenreCrime")) >= 0, /*isSystem*/false);
            c[12] = gcnew ScopeEngineManaged::SqlIpColumn(gcnew System::String("GenreDocumentary"), System::Boolean::typeid, readOnlyColumns == nullptr ? false : Array::IndexOf(readOnlyColumns, gcnew System::String("GenreDocumentary")) >= 0, /*isSystem*/false);
            c[13] = gcnew ScopeEngineManaged::SqlIpColumn(gcnew System::String("GenreDrama"), System::Boolean::typeid, readOnlyColumns == nullptr ? false : Array::IndexOf(readOnlyColumns, gcnew System::String("GenreDrama")) >= 0, /*isSystem*/false);
            c[14] = gcnew ScopeEngineManaged::SqlIpColumn(gcnew System::String("GenreFantasy"), System::Boolean::typeid, readOnlyColumns == nullptr ? false : Array::IndexOf(readOnlyColumns, gcnew System::String("GenreFantasy")) >= 0, /*isSystem*/false);
            c[15] = gcnew ScopeEngineManaged::SqlIpColumn(gcnew System::String("GenreNoire"), System::Boolean::typeid, readOnlyColumns == nullptr ? false : Array::IndexOf(readOnlyColumns, gcnew System::String("GenreNoire")) >= 0, /*isSystem*/false);
            c[16] = gcnew ScopeEngineManaged::SqlIpColumn(gcnew System::String("GenreHorror"), System::Boolean::typeid, readOnlyColumns == nullptr ? false : Array::IndexOf(readOnlyColumns, gcnew System::String("GenreHorror")) >= 0, /*isSystem*/false);
            c[17] = gcnew ScopeEngineManaged::SqlIpColumn(gcnew System::String("GenreMusical"), System::Boolean::typeid, readOnlyColumns == nullptr ? false : Array::IndexOf(readOnlyColumns, gcnew System::String("GenreMusical")) >= 0, /*isSystem*/false);
            c[18] = gcnew ScopeEngineManaged::SqlIpColumn(gcnew System::String("GenreMystery"), System::Boolean::typeid, readOnlyColumns == nullptr ? false : Array::IndexOf(readOnlyColumns, gcnew System::String("GenreMystery")) >= 0, /*isSystem*/false);
            c[19] = gcnew ScopeEngineManaged::SqlIpColumn(gcnew System::String("GenreRomance"), System::Boolean::typeid, readOnlyColumns == nullptr ? false : Array::IndexOf(readOnlyColumns, gcnew System::String("GenreRomance")) >= 0, /*isSystem*/false);
            c[20] = gcnew ScopeEngineManaged::SqlIpColumn(gcnew System::String("GenreSciFi"), System::Boolean::typeid, readOnlyColumns == nullptr ? false : Array::IndexOf(readOnlyColumns, gcnew System::String("GenreSciFi")) >= 0, /*isSystem*/false);
            c[21] = gcnew ScopeEngineManaged::SqlIpColumn(gcnew System::String("GenreThriller"), System::Boolean::typeid, readOnlyColumns == nullptr ? false : Array::IndexOf(readOnlyColumns, gcnew System::String("GenreThriller")) >= 0, /*isSystem*/false);
            c[22] = gcnew ScopeEngineManaged::SqlIpColumn(gcnew System::String("GenreWar"), System::Boolean::typeid, readOnlyColumns == nullptr ? false : Array::IndexOf(readOnlyColumns, gcnew System::String("GenreWar")) >= 0, /*isSystem*/false);
            c[23] = gcnew ScopeEngineManaged::SqlIpColumn(gcnew System::String("GenreWestern"), System::Boolean::typeid, readOnlyColumns == nullptr ? false : Array::IndexOf(readOnlyColumns, gcnew System::String("GenreWestern")) >= 0, /*isSystem*/false);
            return c;        
        }

        static System::Object^ ComplexColumnGetter(int index, BYTE* address)
        {
            System::Object^ r = nullptr;
            return r;
        }

        static System::Object^ UDTColumnGetter(int index, BYTE* address)
        {
            System::Object^ r = nullptr;
            return r;
        }

        ManagedRow()
        {
            SqlIpSchema^ schema = gcnew SqlIpSchema(Columns(nullptr), &ManagedRow<Extract_0_Data0>::ComplexColumnGetter, &ManagedRow<Extract_0_Data0>::UDTColumnGetter);   
            m_row.reset(gcnew SqlIpRow(schema, ColumnOffsets(), nullptr));
        }

        SqlIpRow^ get()
        {
            return m_row.get();
        }

    private:
    
        ScopeTypedManagedHandle<SqlIpRow^> m_row;
        ManagedRow & operator=(ManagedRow &);
    };

    template class ManagedRowFactory<Extract_0_Data0>;    
    template<>
    struct ManagedRow<Process_4_Data0>
    {
        cli::array<ScopeEngineManaged::ColumnOffsetId>^ ColumnOffsets()
        {
            cli::array<ScopeEngineManaged::ColumnOffsetId>^ offset = gcnew cli::array<ScopeEngineManaged::ColumnOffsetId>(4);            
            offset[0] = ColumnOffsetId(offsetof(Process_4_Data0, m_MovieId), T_Integer);
            offset[1] = ColumnOffsetId(offsetof(Process_4_Data0, m_partialagg2__), T_Long);
            offset[2] = ColumnOffsetId(offsetof(Process_4_Data0, m_partialagg3__), T_DecimalQ);
            offset[3] = ColumnOffsetId(offsetof(Process_4_Data0, m_partialagg4__), T_Long);
            return offset;        
        }

        cli::array<ScopeEngineManaged::SqlIpColumn^>^ Columns(cli::array<String^>^ readOnlyColumns)
        {
            cli::array<ScopeEngineManaged::SqlIpColumn^>^ c = gcnew cli::array<ScopeEngineManaged::SqlIpColumn^>(4);
            c[0] = gcnew ScopeEngineManaged::SqlIpColumn(gcnew System::String("MovieId"), System::Int32::typeid, readOnlyColumns == nullptr ? false : Array::IndexOf(readOnlyColumns, gcnew System::String("MovieId")) >= 0, /*isSystem*/false);
            c[1] = gcnew ScopeEngineManaged::SqlIpColumn(gcnew System::String("partialagg2__"), System::Int64::typeid, readOnlyColumns == nullptr ? false : Array::IndexOf(readOnlyColumns, gcnew System::String("partialagg2__")) >= 0, /*isSystem*/false);
            c[2] = gcnew ScopeEngineManaged::SqlIpColumn(gcnew System::String("partialagg3__"), System::Nullable<System::Decimal>::typeid, readOnlyColumns == nullptr ? false : Array::IndexOf(readOnlyColumns, gcnew System::String("partialagg3__")) >= 0, /*isSystem*/false);
            c[3] = gcnew ScopeEngineManaged::SqlIpColumn(gcnew System::String("partialagg4__"), System::Int64::typeid, readOnlyColumns == nullptr ? false : Array::IndexOf(readOnlyColumns, gcnew System::String("partialagg4__")) >= 0, /*isSystem*/false);
            return c;        
        }

        static System::Object^ ComplexColumnGetter(int index, BYTE* address)
        {
            System::Object^ r = nullptr;
            return r;
        }

        static System::Object^ UDTColumnGetter(int index, BYTE* address)
        {
            System::Object^ r = nullptr;
            return r;
        }

        ManagedRow()
        {
            SqlIpSchema^ schema = gcnew SqlIpSchema(Columns(nullptr), &ManagedRow<Process_4_Data0>::ComplexColumnGetter, &ManagedRow<Process_4_Data0>::UDTColumnGetter);   
            m_row.reset(gcnew SqlIpRow(schema, ColumnOffsets(), nullptr));
        }

        SqlIpRow^ get()
        {
            return m_row.get();
        }

    private:
    
        ScopeTypedManagedHandle<SqlIpRow^> m_row;
        ManagedRow & operator=(ManagedRow &);
    };

    template class ManagedRowFactory<Process_4_Data0>;    
    template<>
    struct ManagedRow<SV2_Extract_out0>
    {
        cli::array<ScopeEngineManaged::ColumnOffsetId>^ ColumnOffsets()
        {
            cli::array<ScopeEngineManaged::ColumnOffsetId>^ offset = gcnew cli::array<ScopeEngineManaged::ColumnOffsetId>(3);            
            offset[0] = ColumnOffsetId(offsetof(SV2_Extract_out0, m_NumberOfRatings), T_LongQ);
            offset[1] = ColumnOffsetId(offsetof(SV2_Extract_out0, m_AvgRating), T_Decimal);
            offset[2] = ColumnOffsetId(offsetof(SV2_Extract_out0, m_MovieId1), T_Integer);
            return offset;        
        }

        cli::array<ScopeEngineManaged::SqlIpColumn^>^ Columns(cli::array<String^>^ readOnlyColumns)
        {
            cli::array<ScopeEngineManaged::SqlIpColumn^>^ c = gcnew cli::array<ScopeEngineManaged::SqlIpColumn^>(3);
            c[0] = gcnew ScopeEngineManaged::SqlIpColumn(gcnew System::String("NumberOfRatings"), System::Nullable<System::Int64>::typeid, readOnlyColumns == nullptr ? false : Array::IndexOf(readOnlyColumns, gcnew System::String("NumberOfRatings")) >= 0, /*isSystem*/false);
            c[1] = gcnew ScopeEngineManaged::SqlIpColumn(gcnew System::String("AvgRating"), System::Decimal::typeid, readOnlyColumns == nullptr ? false : Array::IndexOf(readOnlyColumns, gcnew System::String("AvgRating")) >= 0, /*isSystem*/false);
            c[2] = gcnew ScopeEngineManaged::SqlIpColumn(gcnew System::String("MovieId1"), System::Int32::typeid, readOnlyColumns == nullptr ? false : Array::IndexOf(readOnlyColumns, gcnew System::String("MovieId1")) >= 0, /*isSystem*/false);
            return c;        
        }

        static System::Object^ ComplexColumnGetter(int index, BYTE* address)
        {
            System::Object^ r = nullptr;
            return r;
        }

        static System::Object^ UDTColumnGetter(int index, BYTE* address)
        {
            System::Object^ r = nullptr;
            return r;
        }

        ManagedRow()
        {
            SqlIpSchema^ schema = gcnew SqlIpSchema(Columns(nullptr), &ManagedRow<SV2_Extract_out0>::ComplexColumnGetter, &ManagedRow<SV2_Extract_out0>::UDTColumnGetter);   
            m_row.reset(gcnew SqlIpRow(schema, ColumnOffsets(), nullptr));
        }

        SqlIpRow^ get()
        {
            return m_row.get();
        }

    private:
    
        ScopeTypedManagedHandle<SqlIpRow^> m_row;
        ManagedRow & operator=(ManagedRow &);
    };

    template class ManagedRowFactory<SV2_Extract_out0>;    

#endif // defined(COMPILE_MANAGED)


//}

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

#if defined(COMPILE_NATIVE)
    template<> 
    class BinaryExtractPolicy<Process_1_Data0>
    {
    public:
        static bool Deserialize(BinaryInputStream * input, Process_1_Data0 & row)
        {
            try
            {
                char b = 0;
                input->Read(b);
                if (b==0)
                {
                    input->Read(row.m_MovieId);
                    input->Read(row.m_Title);
                }
                else
                {
                    char ___masking___[1];
                    ___masking___[0] = b;
                    input->Read(row.m_MovieId);
                    if ((___masking___[0] & 2 ) != 2)
                    {
                        input->Read(row.m_Title);
                    }
                    else
                    {
                        row.m_Title.SetNull();
                    }
                }
            }
            catch (ScopeStreamException &) 
            {
                // we reach the end of file
                return false;
            }

            return true;
        }
    };
#endif // defined(COMPILE_NATIVE)

    template<> 
    class BinaryOutputPolicy<Process_1_Data0>
    {
    public:
    
        static void SerializeHeader(BinaryOutputStream * output)
        {
            SCOPE_ASSERT(!"BinaryOutputPolicy::SerializeHeader method should not be invoked.");
        }
        
        __declspec(noinline) static void Serialize(BinaryOutputStream * output, Process_1_Data0 & row)
        {
            SIZE_T rowStart =  output->GetOutputer().GetCurrentPosition();
            char b = 0;
            char ___masking___[1];
            ___masking___[0] = 1;
            bool hasNull = false;
            if (row.m_Title.IsNull())
            {
                hasNull = true;
                ___masking___[0] |= 2;
            }
            if (hasNull)
            {
                output->Write(___masking___[0]);
            }
            else
            {
                output->Write(b);
            }
            output->Write(row.m_MovieId);
            if (!row.m_Title.IsNull())
            {
                output->Write(row.m_Title);
            }
            SIZE_T rowSize =  output->GetOutputer().GetCurrentPosition() - rowStart;
            auto rowLimit = ScopeEngine::Configuration::GetGlobal().GetMaxOnDiskRowSize();
            if (rowSize > rowLimit)
            {
                throw RuntimeException(E_USER_ONDISKROW_TOO_BIG, {rowSize, rowLimit, "--- Printing row content is disabled. To enable, use '-ON ReportRowContentOnError'. ---"});
            }
        }
        static void Serialize(DummyOutputStream * output, const Process_1_Data0 & row)
        {
            SCOPE_ASSERT(false); 
        }
            static void SerializeKeyForSS(MemoryOutputStream* output, const Process_1_Data0 & row)
            {
                SCOPE_ASSERT(false); // there is no partition key in the schema
            }
    };

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

#if defined(COMPILE_NATIVE)
    template<> 
    class BinaryExtractPolicy<SV2_Extract_out0>
    {
    public:
        static bool Deserialize(BinaryInputStream * input, SV2_Extract_out0 & row)
        {
            try
            {
                char b = 0;
                input->Read(b);
                if (b==0)
                {
                    input->Read(row.m_NumberOfRatings);
                    input->Read(row.m_AvgRating);
                    input->Read(row.m_MovieId1);
                }
                else
                {
                    char ___masking___[1];
                    ___masking___[0] = b;
                    if ((___masking___[0] & 2 ) != 2)
                    {
                        input->Read(row.m_NumberOfRatings);
                    }
                    else
                    {
                        row.m_NumberOfRatings.SetNull();
                    }
                    input->Read(row.m_AvgRating);
                    input->Read(row.m_MovieId1);
                }
            }
            catch (ScopeStreamException &) 
            {
                // we reach the end of file
                return false;
            }

            return true;
        }
    };
#endif // defined(COMPILE_NATIVE)

    template<> 
    class BinaryOutputPolicy<SV2_Extract_out0>
    {
    public:
    
        static void SerializeHeader(BinaryOutputStream * output)
        {
            SCOPE_ASSERT(!"BinaryOutputPolicy::SerializeHeader method should not be invoked.");
        }
        
        __declspec(noinline) static void Serialize(BinaryOutputStream * output, SV2_Extract_out0 & row)
        {
            SIZE_T rowStart =  output->GetOutputer().GetCurrentPosition();
            char b = 0;
            char ___masking___[1];
            ___masking___[0] = 1;
            bool hasNull = false;
            if (row.m_NumberOfRatings.IsNull())
            {
                hasNull = true;
                ___masking___[0] |= 2;
            }
            if (hasNull)
            {
                output->Write(___masking___[0]);
            }
            else
            {
                output->Write(b);
            }
            if (!row.m_NumberOfRatings.IsNull())
            {
                output->Write(row.m_NumberOfRatings);
            }
            output->Write(row.m_AvgRating);
            output->Write(row.m_MovieId1);
            SIZE_T rowSize =  output->GetOutputer().GetCurrentPosition() - rowStart;
            auto rowLimit = ScopeEngine::Configuration::GetGlobal().GetMaxOnDiskRowSize();
            if (rowSize > rowLimit)
            {
                throw RuntimeException(E_USER_ONDISKROW_TOO_BIG, {rowSize, rowLimit, "--- Printing row content is disabled. To enable, use '-ON ReportRowContentOnError'. ---"});
            }
        }
        static void Serialize(DummyOutputStream * output, const SV2_Extract_out0 & row)
        {
            SCOPE_ASSERT(false); 
        }
            static void SerializeKeyForSS(MemoryOutputStream* output, const SV2_Extract_out0 & row)
            {
                SCOPE_ASSERT(false); // there is no partition key in the schema
            }
    };

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

#if defined(COMPILE_NATIVE)
    template<> 
    class BinaryExtractPolicy<Process_4_Data0>
    {
    public:
        static bool Deserialize(BinaryInputStream * input, Process_4_Data0 & row)
        {
            try
            {
                char b = 0;
                input->Read(b);
                if (b==0)
                {
                    input->Read(row.m_MovieId);
                    input->Read(row.m_partialagg2__);
                    input->Read(row.m_partialagg3__);
                    input->Read(row.m_partialagg4__);
                }
                else
                {
                    char ___masking___[1];
                    ___masking___[0] = b;
                    input->Read(row.m_MovieId);
                    input->Read(row.m_partialagg2__);
                    if ((___masking___[0] & 2 ) != 2)
                    {
                        input->Read(row.m_partialagg3__);
                    }
                    else
                    {
                        row.m_partialagg3__.SetNull();
                    }
                    input->Read(row.m_partialagg4__);
                }
            }
            catch (ScopeStreamException &) 
            {
                // we reach the end of file
                return false;
            }

            return true;
        }
    };
#endif // defined(COMPILE_NATIVE)

    template<> 
    class BinaryOutputPolicy<Process_4_Data0>
    {
    public:
    
        static void SerializeHeader(BinaryOutputStream * output)
        {
            SCOPE_ASSERT(!"BinaryOutputPolicy::SerializeHeader method should not be invoked.");
        }
        
        __declspec(noinline) static void Serialize(BinaryOutputStream * output, Process_4_Data0 & row)
        {
            SIZE_T rowStart =  output->GetOutputer().GetCurrentPosition();
            char b = 0;
            char ___masking___[1];
            ___masking___[0] = 1;
            bool hasNull = false;
            if (row.m_partialagg3__.IsNull())
            {
                hasNull = true;
                ___masking___[0] |= 2;
            }
            if (hasNull)
            {
                output->Write(___masking___[0]);
            }
            else
            {
                output->Write(b);
            }
            output->Write(row.m_MovieId);
            output->Write(row.m_partialagg2__);
            if (!row.m_partialagg3__.IsNull())
            {
                output->Write(row.m_partialagg3__);
            }
            output->Write(row.m_partialagg4__);
            SIZE_T rowSize =  output->GetOutputer().GetCurrentPosition() - rowStart;
            auto rowLimit = ScopeEngine::Configuration::GetGlobal().GetMaxOnDiskRowSize();
            if (rowSize > rowLimit)
            {
                throw RuntimeException(E_USER_ONDISKROW_TOO_BIG, {rowSize, rowLimit, "--- Printing row content is disabled. To enable, use '-ON ReportRowContentOnError'. ---"});
            }
        }
        static void Serialize(DummyOutputStream * output, const Process_4_Data0 & row)
        {
            SCOPE_ASSERT(false); 
        }
            static void SerializeKeyForSS(MemoryOutputStream* output, const Process_4_Data0 & row)
            {
                SCOPE_ASSERT(false); // there is no partition key in the schema
            }
    };

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

#if defined(COMPILE_NATIVE)
    template<> 
    class BinaryExtractPolicy<Process_10_Data0>
    {
    public:
        static bool Deserialize(BinaryInputStream * input, Process_10_Data0 & row)
        {
            try
            {
                char b = 0;
                input->Read(b);
                if (b==0)
                {
                    input->Read(row.m_Title);
                    input->Read(row.m_NumberOfRatings);
                    input->Read(row.m_AvgRating);
                    input->Read(row.m_InfoMovieId);
                }
                else
                {
                    char ___masking___[1];
                    ___masking___[0] = b;
                    if ((___masking___[0] & 2 ) != 2)
                    {
                        input->Read(row.m_Title);
                    }
                    else
                    {
                        row.m_Title.SetNull();
                    }
                    if ((___masking___[0] & 4 ) != 4)
                    {
                        input->Read(row.m_NumberOfRatings);
                    }
                    else
                    {
                        row.m_NumberOfRatings.SetNull();
                    }
                    input->Read(row.m_AvgRating);
                    input->Read(row.m_InfoMovieId);
                }
            }
            catch (ScopeStreamException &) 
            {
                // we reach the end of file
                return false;
            }

            return true;
        }
    };
#endif // defined(COMPILE_NATIVE)

    template<> 
    class BinaryOutputPolicy<Process_10_Data0>
    {
    public:
    
        static void SerializeHeader(BinaryOutputStream * output)
        {
            SCOPE_ASSERT(!"BinaryOutputPolicy::SerializeHeader method should not be invoked.");
        }
        
        __declspec(noinline) static void Serialize(BinaryOutputStream * output, Process_10_Data0 & row)
        {
            SIZE_T rowStart =  output->GetOutputer().GetCurrentPosition();
            char b = 0;
            char ___masking___[1];
            ___masking___[0] = 1;
            bool hasNull = false;
            if (row.m_Title.IsNull())
            {
                hasNull = true;
                ___masking___[0] |= 2;
            }
            if (row.m_NumberOfRatings.IsNull())
            {
                hasNull = true;
                ___masking___[0] |= 4;
            }
            if (hasNull)
            {
                output->Write(___masking___[0]);
            }
            else
            {
                output->Write(b);
            }
            if (!row.m_Title.IsNull())
            {
                output->Write(row.m_Title);
            }
            if (!row.m_NumberOfRatings.IsNull())
            {
                output->Write(row.m_NumberOfRatings);
            }
            output->Write(row.m_AvgRating);
            output->Write(row.m_InfoMovieId);
            SIZE_T rowSize =  output->GetOutputer().GetCurrentPosition() - rowStart;
            auto rowLimit = ScopeEngine::Configuration::GetGlobal().GetMaxOnDiskRowSize();
            if (rowSize > rowLimit)
            {
                throw RuntimeException(E_USER_ONDISKROW_TOO_BIG, {rowSize, rowLimit, "--- Printing row content is disabled. To enable, use '-ON ReportRowContentOnError'. ---"});
            }
        }
        static void Serialize(DummyOutputStream * output, const Process_10_Data0 & row)
        {
            SCOPE_ASSERT(false); 
        }
            static void SerializeKeyForSS(MemoryOutputStream* output, const Process_10_Data0 & row)
            {
                SCOPE_ASSERT(false); // there is no partition key in the schema
            }
    };

#pragma region Schema Constructors
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    INLINE Extract_0_Data0::Extract_0_Data0()
    {
        m_MovieId = 0;
        m_GenreUnknown = false;
        m_GenreAction = false;
        m_GenreAdventure = false;
        m_GenreAnimation = false;
        m_GenreChildrens = false;
        m_GenreComedy = false;
        m_GenreCrime = false;
        m_GenreDocumentary = false;
        m_GenreDrama = false;
        m_GenreFantasy = false;
        m_GenreNoire = false;
        m_GenreHorror = false;
        m_GenreMusical = false;
        m_GenreMystery = false;
        m_GenreRomance = false;
        m_GenreSciFi = false;
        m_GenreThriller = false;
        m_GenreWar = false;
        m_GenreWestern = false;
    }

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    INLINE Process_1_Data0::Process_1_Data0()
    {
        m_MovieId = 0;
    }
    INLINE Process_1_Data0::Process_1_Data0(const Process_1_Data0 & c, IncrementalAllocator * alloc) :
            m_Title(c.m_Title, alloc)
    {
        m_MovieId = c.m_MovieId;
    }

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    INLINE Extract_3_Data0::Extract_3_Data0()
    {
        m_UserId = 0;
        m_MovieId = 0;
        m_Rating = 0;
        m_Timestamp = 0.0;
    }

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    INLINE Process_4_Data0::Process_4_Data0()
    {
        m_MovieId = 0;
        m_partialagg2__ = 0;
        m_partialagg4__ = 0;
    }
    INLINE Process_4_Data0::Process_4_Data0(const Process_4_Data0 & c, IncrementalAllocator * alloc) :
            m_partialagg3__(c.m_partialagg3__)
    {
        m_MovieId = c.m_MovieId;
        m_partialagg2__ = c.m_partialagg2__;
        m_partialagg4__ = c.m_partialagg4__;
    }

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    INLINE HashAggregatorKey_Process_5::HashAggregatorKey_Process_5()
    {
        m_MovieId = 0;
    }
    INLINE HashAggregatorKey_Process_5::HashAggregatorKey_Process_5(const HashAggregatorKey_Process_5 & c, IncrementalAllocator * alloc)
    {
        m_MovieId = c.m_MovieId;
    }

    template <typename Allocator>
    INLINE HashAggregatorKey_Process_5::HashAggregatorKey_Process_5(const HashAggregatorKey_Process_5 & c, FixedArrayTypeMemoryManager<Allocator> * memoryManager)
    {

        m_MovieId = c.m_MovieId;
    }

    template <typename Allocator>
    INLINE void HashAggregatorKey_Process_5::Delete(FixedArrayTypeMemoryManager<Allocator> * memoryManager)
    {
    }


// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    INLINE HashAggregatorState_Process_5::HashAggregatorState_Process_5()
    {
        m_UNCHECKED_SUM_partialagg2__ = 0;
        m_SUM_fEmpty_partialagg3__ = false;
        m_UNCHECKED_SUM_partialagg4__ = 0;
    }
    INLINE HashAggregatorState_Process_5::HashAggregatorState_Process_5(const HashAggregatorState_Process_5 & c, IncrementalAllocator * alloc) :
            m_SUM_partialagg3__(c.m_SUM_partialagg3__)
    {
        m_UNCHECKED_SUM_partialagg2__ = c.m_UNCHECKED_SUM_partialagg2__;
        m_SUM_fEmpty_partialagg3__ = c.m_SUM_fEmpty_partialagg3__;
        m_UNCHECKED_SUM_partialagg4__ = c.m_UNCHECKED_SUM_partialagg4__;
    }

    template <typename Allocator>
    INLINE HashAggregatorState_Process_5::HashAggregatorState_Process_5(const HashAggregatorState_Process_5 & c, FixedArrayTypeMemoryManager<Allocator> * memoryManager)
    {

        m_UNCHECKED_SUM_partialagg2__ = c.m_UNCHECKED_SUM_partialagg2__;
        m_SUM_partialagg3__ = c.m_SUM_partialagg3__;
        m_SUM_fEmpty_partialagg3__ = c.m_SUM_fEmpty_partialagg3__;
        m_UNCHECKED_SUM_partialagg4__ = c.m_UNCHECKED_SUM_partialagg4__;
    }

    template <typename Allocator>
    INLINE void HashAggregatorState_Process_5::Delete(FixedArrayTypeMemoryManager<Allocator> * memoryManager)
    {
    }


// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    INLINE SV2_Extract_out0::SV2_Extract_out0()
    {
        m_MovieId1 = 0;
    }
    INLINE SV2_Extract_out0::SV2_Extract_out0(const SV2_Extract_out0 & c, IncrementalAllocator * alloc) :
            m_NumberOfRatings(c.m_NumberOfRatings),
            m_AvgRating(c.m_AvgRating)
    {
        m_MovieId1 = c.m_MovieId1;
    }

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    INLINE Join_9_Data0::Join_9_Data0()
    {
        m_MovieId = 0;
    }

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    INLINE Process_10_Data0::Process_10_Data0()
    {
        m_InfoMovieId = 0;
    }
    INLINE Process_10_Data0::Process_10_Data0(const Process_10_Data0 & c, IncrementalAllocator * alloc) :
            m_Title(c.m_Title, alloc),
            m_NumberOfRatings(c.m_NumberOfRatings),
            m_AvgRating(c.m_AvgRating)
    {
        m_InfoMovieId = c.m_InfoMovieId;
    }

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    INLINE Process_12_Data0::Process_12_Data0()
    {
        m_InfoMovieId = 0;
    }

#pragma endregion Schema Constructors
#pragma hdrstop
#if defined(COMPILE_INIT_SHUTDOWN)
#if defined(COMPILE_MANAGED)
extern "C" __declspec(dllexport) void __stdcall InitVertexManaged(std::string * argv, int argc)
{
#if defined(FORCEMANAGEDDATETIMESER)
    ScopeEngine::ScopeDateTime::ForceManagedSerialization = true;
#endif
    cli::array<String^>^ arguments = ScopeEngineManaged::GroupArguments(argv, argc);
    ScopeEngineManaged::InitializeScopeEngineManaged(arguments);
}
extern "C" __declspec(dllexport) void __stdcall ShutdownVertexManaged(CLRMemoryStat& stat)
{
    ScopeEngineManaged::FinalizeScopeEngineManaged(stat);
}
#endif
#if defined(COMPILE_NATIVE)
ScopeEngine::ScopeCEPCheckpointManager* g_scopeCEPCheckpointManager = NULL;
extern "C" __declspec(dllexport) void __stdcall InitVertexNative(VertexExecutionInfo * vertexExecutionInfo)
{
#if defined(FORCEMANAGEDDATETIMESER)
    ScopeEngine::ScopeDateTime::ForceManagedSerialization = true;
#endif
    ErrorManager::GetGlobal()->EnableJSON();

}
extern "C" __declspec(dllexport) void __stdcall SV_CopyThrough_execute(std::string * argv, int argc, InputFileInfo* inputs, int inputCnt, OutputFileInfo* outputs, int outputCnt, VertexExecutionInfo * vertexExecutionInfo)
{
    SCOPE_ASSERT(inputCnt == 1 && outputCnt == 1);
    IOManager::CopyStream(IOManager::GetGlobal()->GetDevice(inputs[0].inputFileName), IOManager::GetGlobal()->GetDevice(outputs[0].outputFileName));
}
#endif
#endif
#pragma region SV1_Extract
#if defined(COMPILE_SV1_EXTRACT) || defined(COMPILE_ALL_VERTICES)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    template<> 
    class KeyComparePolicy<Process_1_Data0,UID_Process_2>
    {
    public:
        struct KeyStruct
        {
            int m_MovieId;

            KeyStruct(Process_1_Data0 & c) :
                m_MovieId(c.m_MovieId)
            {
            }

            KeyStruct(const Process_1_Data0 & c, IncrementalAllocator * alloc) :
                m_MovieId(const_cast<Process_1_Data0&>(c).m_MovieId)
            {
            }

            KeyStruct(KeyStruct & c) :
                m_MovieId(c.m_MovieId)
            {
            }

            KeyStruct(const KeyStruct & c, IncrementalAllocator * alloc) :
                m_MovieId(const_cast<KeyStruct&>(c).m_MovieId)
            {
            }

            KeyStruct() :
                m_MovieId(0)
            {
            }
#if defined(SCOPE_DEBUG)
            friend ostream & operator<<(ostream & os, KeyStruct & row)
            {
                os << "\tMovieId:\t" << row.m_MovieId << endl;
              return os;
            }
#endif // defined(SCOPE_DEBUG)
        };

        typedef KeyStruct KeyType;

        static int Compare(Process_1_Data0 & row, KeyType & key)
        {
            int r = 0;
            if ((r = ScopeTypeCompare(row.m_MovieId, key.m_MovieId)) != 0)
                return r;
            return r;
        }

        static int Compare(Process_1_Data0 * n1, Process_1_Data0 * n2)
        {
            int r = 0;
            if ((r = ScopeTypeCompare((*n1).m_MovieId, (*n2).m_MovieId)) != 0)
                return r;
            return r;
        }

        // Key function for MKQsort algorithm
        static __int64 Key(Process_1_Data0 * p, int depth)
        {
            if (depth < 1)
            {
                // We only support interger number as MKQsort key for now
                return (__int64)((*p).m_MovieId);
            }

            --depth;

            return 0;
        }

        // End of Key function for MKQSort algorithm
        static bool EofKey(Process_1_Data0 * p, int depth)
        {
            --depth;
            if (depth < 0)
                return false;
            return true;
        }
    };

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_MANAGED)
    template<>
    struct ManagedUDO<UID_Extract_0>
    {
        typedef Microsoft::Analytics::Interfaces::IExtractor UDO;

        ManagedUDO(std::string * argv, int argc)
        {
            try
            {
                m_udo.reset(___Scope_Generated_Classes___::__OperatorFactory__::Create_Extract_0());
                m_args.reset(gcnew Generic::List<String^>(ConvertArgsToArray(std::wstring{})));
            }
            catch (Exception ^ex)
            {
                ScopeEngineManaged::UserExceptionHelper::WrapUserException(___Scope_Generated_Classes___::__OperatorFactory__::Name_Extract_0, "Constructor", ex);
                throw;
            }
        }

        int StreamIdColumnIndex()
        {
            return -1;
        }

        UDO^ get()
        {
            return m_udo.get();
        }

        Generic::List<String^>^ args()
        {
            return m_args.get();
        }
        cli::array<String^>^ ReadOnlyColumns_Output()
        {
            return nullptr;
        }
        
        cli::array<String^>^ ReadOnlyColumns_Input()
        {
            return nullptr;
        }

    private:
        ScopeTypedManagedHandle<UDO^> m_udo;
        ScopeTypedManagedHandle<Generic::List<String^>^> m_args;
        ManagedUDO & operator=(ManagedUDO &);
    };
    template<>
    class InteropToNativeRowPolicy<Extract_0_Data0, UID_Extract_0>
    {
    public:
        static void Marshal(ScopeEngineManaged::SqlIpRow^ managedRow, Extract_0_Data0& nativeRow, IncrementalAllocator* alloc)
        {
            ScopeManagedInterop::CopyToNativeColumn(nativeRow.m_MovieId, managedRow->GetInternal<System::Int32>(0), alloc);
            ScopeManagedInterop::CopyToNativeColumn(nativeRow.m_Title, managedRow->GetInternal<System::String^>(1), alloc);
            ScopeManagedInterop::CopyToNativeColumn(nativeRow.m_ReleaseDate, managedRow->GetInternal<System::DateTime>(2), alloc);
            ScopeManagedInterop::CopyToNativeColumn(nativeRow.m_VideoReleaseDate, managedRow->GetInternal<System::Nullable<System::DateTime>>(3), alloc);
            ScopeManagedInterop::CopyToNativeColumn(nativeRow.m_IMDbURL, managedRow->GetInternal<System::String^>(4), alloc);
            ScopeManagedInterop::CopyToNativeColumn(nativeRow.m_GenreUnknown, managedRow->GetInternal<System::Boolean>(5), alloc);
            ScopeManagedInterop::CopyToNativeColumn(nativeRow.m_GenreAction, managedRow->GetInternal<System::Boolean>(6), alloc);
            ScopeManagedInterop::CopyToNativeColumn(nativeRow.m_GenreAdventure, managedRow->GetInternal<System::Boolean>(7), alloc);
            ScopeManagedInterop::CopyToNativeColumn(nativeRow.m_GenreAnimation, managedRow->GetInternal<System::Boolean>(8), alloc);
            ScopeManagedInterop::CopyToNativeColumn(nativeRow.m_GenreChildrens, managedRow->GetInternal<System::Boolean>(9), alloc);
            ScopeManagedInterop::CopyToNativeColumn(nativeRow.m_GenreComedy, managedRow->GetInternal<System::Boolean>(10), alloc);
            ScopeManagedInterop::CopyToNativeColumn(nativeRow.m_GenreCrime, managedRow->GetInternal<System::Boolean>(11), alloc);
            ScopeManagedInterop::CopyToNativeColumn(nativeRow.m_GenreDocumentary, managedRow->GetInternal<System::Boolean>(12), alloc);
            ScopeManagedInterop::CopyToNativeColumn(nativeRow.m_GenreDrama, managedRow->GetInternal<System::Boolean>(13), alloc);
            ScopeManagedInterop::CopyToNativeColumn(nativeRow.m_GenreFantasy, managedRow->GetInternal<System::Boolean>(14), alloc);
            ScopeManagedInterop::CopyToNativeColumn(nativeRow.m_GenreNoire, managedRow->GetInternal<System::Boolean>(15), alloc);
            ScopeManagedInterop::CopyToNativeColumn(nativeRow.m_GenreHorror, managedRow->GetInternal<System::Boolean>(16), alloc);
            ScopeManagedInterop::CopyToNativeColumn(nativeRow.m_GenreMusical, managedRow->GetInternal<System::Boolean>(17), alloc);
            ScopeManagedInterop::CopyToNativeColumn(nativeRow.m_GenreMystery, managedRow->GetInternal<System::Boolean>(18), alloc);
            ScopeManagedInterop::CopyToNativeColumn(nativeRow.m_GenreRomance, managedRow->GetInternal<System::Boolean>(19), alloc);
            ScopeManagedInterop::CopyToNativeColumn(nativeRow.m_GenreSciFi, managedRow->GetInternal<System::Boolean>(20), alloc);
            ScopeManagedInterop::CopyToNativeColumn(nativeRow.m_GenreThriller, managedRow->GetInternal<System::Boolean>(21), alloc);
            ScopeManagedInterop::CopyToNativeColumn(nativeRow.m_GenreWar, managedRow->GetInternal<System::Boolean>(22), alloc);
            ScopeManagedInterop::CopyToNativeColumn(nativeRow.m_GenreWestern, managedRow->GetInternal<System::Boolean>(23), alloc);
        }
    };
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

    static const char * StringTable_Process_1 [] =
    {
        "MovieId",
        "Title",
        "\"*** After Last Expression ***\"",
    };
    template<> 
    class RowTransformPolicy<typename Extract_0_Data0, typename Process_1_Data0, UID_Process_1>
    {
    public:

        static bool FilterTransformRow(Extract_0_Data0 & input, Process_1_Data0 & output, IncrementalAllocator * alloc)
        {
            int exceptionIndex = 0;
            try
            {
                output.m_MovieId = input.m_MovieId;
                exceptionIndex++;
                output.m_Title = input.m_Title;
                exceptionIndex++;

                return true;
            }
            catch(ExceptionWithStack& e)
            {
                throw RuntimeExpressionException(StringTable_Process_1[exceptionIndex], "<not supplied>", e);
            }
            catch(...)
            {
                throw RuntimeExpressionException(StringTable_Process_1[exceptionIndex]);
            }
        }


        #pragma warning(push)
        #pragma warning(disable: 4100) // 'alloc': unreferenced formal parameter
        static __declspec(noinline) void InitializeStatics(IncrementalAllocator * alloc)
        {
        #pragma warning(pop)
        }

        // get operator resource requirements
        static OperatorRequirements GetOperatorRequirements()
        {
            return OperatorRequirements().AddMemoryInRows(1, 1);
        }
    };



// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.



#if defined(COMPILE_NATIVE)
namespace ScopeGeneratedClasses
{
    extern "C" __declspec(dllexport) void __stdcall SV1_Extract_execute(std::string * argv, int argc, InputFileInfo* inputs, int inputCnt, OutputFileInfo* outputs, int outputCnt, VertexExecutionInfo * vertexExecutionInfo)
    {
#ifdef USE_SSE4_2
        // check CPUID to make sure this machjine supports SSE4_2 instructions
        // - this is incase we download a cluster vertex and try and debug it on a machine that doesn't support these instructions
        int cpuInfo[4];
        __cpuid(cpuInfo, 0x00000001);
        //Array index | Bit range | Description 
        // 2          | 20        | SSE4.2 extensions
        if ((cpuInfo[2] & (1 << 20)) == 0)
        {
            throw RuntimeException(E_USER_ERROR, "Please recompile __ScopeCodeGenEngine__.dll without /DUSE_SSE4_2");
            return;
        }
#endif

        Configuration::Create(ET_Azure, false);

        SIZE_T x_inputBufSize, x_outputBufSize, x_inputVirtualMemoryLimit;
        int    x_inputBufCnt, x_outputBufCnt;
        
        MemoryManager::CalculateIOBufferSize(inputCnt, outputCnt, MemoryManager::x_vertexMemoryLimit, MemoryManager::x_vertexReserveMemory, x_inputBufSize, x_inputBufCnt, x_outputBufSize, x_outputBufCnt, x_inputVirtualMemoryLimit, false);

        const bool IsNativeOnlyVertex = false;
        // If we have more than one input, we will random shuffle it
        if (inputCnt - 0 > 1)
        {
            ScopeRandom scopeRandom((int)vertexExecutionInfo->m_vertexId);
            auto lambda = [&scopeRandom](int max)->int { return (scopeRandom.Next() % max + max) % max;}; // scopeRandom.Next() % max could be negative value
            random_shuffle(&inputs[0], inputs + inputCnt - 0, lambda ); 
        }
        // Define extractor type and construct objects
        // 
        typedef ScopeExtractor<CosmosInput, Extract_0_Data0> ExtractorType1_SV1_Extract;
        unique_ptr<unique_ptr<ExtractorType1_SV1_Extract>[]> extractor_0_array(new unique_ptr<ExtractorType1_SV1_Extract>[inputCnt - 0]);
        
        for (int i = 0; i < inputCnt; i++)
        {
            // 
            extractor_0_array[i - 0].reset(new ExtractorType1_SV1_Extract(ScopeExtractorManagedFactory::MakeSqlIp<CosmosInput,Extract_0_Data0,UID_Extract_0, 0>(argv, argc), inputs[i], false, x_inputBufSize, x_inputBufCnt, x_inputVirtualMemoryLimit, UID_Extract_0));
        }
        ExtractorType1_SV1_Extract ** extractor_0 = (ExtractorType1_SV1_Extract **)extractor_0_array.get();
        ULONG extractor_0_count = (ULONG) inputCnt - 0;
        // Define the type of the operator
        typedef FilterTransformer<ExtractorType1_SV1_Extract, Extract_0_Data0, Process_1_Data0, UID_Process_1> FilterTransformerType_Process_1;
        // Allocate memory for the operator array
        unique_ptr<unique_ptr<FilterTransformerType_Process_1>[]> filterTransformer_Process_1_array(new unique_ptr<FilterTransformerType_Process_1>[extractor_0_count]);
        
        // Construct operator objects
        for(ULONG i = 0; i < extractor_0_count; i++)
        {
            filterTransformer_Process_1_array[i].reset(new FilterTransformerType_Process_1(extractor_0[i], UID_Process_1)); 
        }
        
        FilterTransformerType_Process_1 ** filterTransformer_Process_1 = (FilterTransformerType_Process_1 **)filterTransformer_Process_1_array.get();
        ULONG filterTransformer_Process_1_count = extractor_0_count;
        // Merge streams N->1
        typedef ParallelUnionAll<FilterTransformerType_Process_1, Process_1_Data0, IsNativeOnlyVertex> UnionAllType_Process_1_Process_2_connector;
        unique_ptr<UnionAllType_Process_1_Process_2_connector> unionall_Process_1_Process_2_connector_ptr(new UnionAllType_Process_1_Process_2_connector(filterTransformer_Process_1,filterTransformer_Process_1_count,false,UID_ParallelUnionAll_Process_1));
        UnionAllType_Process_1_Process_2_connector * unionall_Process_1_Process_2_connector = unionall_Process_1_Process_2_connector_ptr.get();
        ULONG unionall_Process_1_Process_2_connector_count = 1;
        // Construct operator and initialize it.
        unique_ptr<OperatorDelegate<Process_1_Data0>> delegate_unionall_Process_1_Process_2_connector_ptr (new OperatorDelegate<Process_1_Data0>(OperatorDelegate<Process_1_Data0>::FromOperator(unionall_Process_1_Process_2_connector)));
        OperatorDelegate<Process_1_Data0> * delegate_unionall_Process_1_Process_2_connector = delegate_unionall_Process_1_Process_2_connector_ptr.get();
        ULONG delegate_unionall_Process_1_Process_2_connector_count = 1;
        // Define sorter type
        typedef Sorter<Process_1_Data0> SorterType_Process_2;
        // Construct operator and initialize it.
        unique_ptr<SorterType_Process_2> sorter_Process_2_ptr (new SorterType_Process_2(delegate_unionall_Process_1_Process_2_connector, &StdSort<Process_1_Data0>::Sort<KeyComparePolicy<Process_1_Data0, UID_Process_2>, (sizeof(Process_1_Data0)<=CACHELINE_SIZE)>, ScopeLoserTreeDelegate<Process_1_Data0>::CreateDelegate<UID_Process_2>(), false, 4697620474 /*memoryQuota*/, UID_Process_2));
        SorterType_Process_2 * sorter_Process_2 = sorter_Process_2_ptr.get();
        ULONG sorter_Process_2_count = 1;
        // Define outputer type
        typedef Outputer<SorterType_Process_2, Process_1_Data0, BinaryOutputPolicy<Process_1_Data0>, BinaryOutputStream, false> OutputerType2_SV1_Extract;
        // Construct operator and initialize it
        unique_ptr<OutputerType2_SV1_Extract> outputer_SV1_Extract_out0_ptr(new OutputerType2_SV1_Extract(sorter_Process_2, outputs[0].outputFileName, false, x_outputBufSize, x_outputBufCnt, UID_SV1_Extract_out0));
        OutputerType2_SV1_Extract * outputer_SV1_Extract_out0 = outputer_SV1_Extract_out0_ptr.get();
        try
        {
            // Init operator chain
            outputer_SV1_Extract_out0->Init();

            // Execute the whole vertex by calling the GetNextRow on top operator
            Process_1_Data0 row;
            outputer_SV1_Extract_out0->GetNextRow(row);
    
            // Close operator chain
            outputer_SV1_Extract_out0->Close();
        }
        catch (const ExceptionWithStack& ex)
        {
            if (vertexExecutionInfo->m_reportStatusFunc != NULL)
            {
                ErrorManager::GetGlobal()->SetError(std::current_exception(), "VertexExecute");
                vertexExecutionInfo->m_reportStatusFunc(vertexExecutionInfo->m_statusReportContext);
            }
            
            std::cout << "Caught exception: " << ex.what() << std::endl << ex.GetStack() << std::endl;
            throw;
        }


        // Write out execution stats
        MemoryManager::GetGlobal()->WriteRuntimeStats(vertexExecutionInfo->m_statsRoot);
        outputer_SV1_Extract_out0->WriteRuntimeStats(vertexExecutionInfo->m_statsRoot);
    }
}
#endif // defined(COMPILE_NATIVE)

#if defined(COMPILE_MANAGED)
template ScopeExtractorManaged<CosmosInput,Extract_0_Data0> * ScopeEngine::ScopeExtractorManagedFactory::MakeSqlIp<CosmosInput, Extract_0_Data0, UID_Extract_0, 0>(std::string * argv, int argc);
#endif // defined(COMPILE_MANAGED)

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.



#endif
#pragma endregion SV1_Extract
#pragma region SV2_Extract
#if defined(COMPILE_SV2_EXTRACT) || defined(COMPILE_ALL_VERTICES)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    template<> 
    class KeyComparePolicy<Process_4_Data0,UID_Process_7>
    {
    public:
        struct KeyStruct
        {
            int m_MovieId;

            KeyStruct(Process_4_Data0 & c) :
                m_MovieId(c.m_MovieId)
            {
            }

            KeyStruct(const Process_4_Data0 & c, IncrementalAllocator * alloc) :
                m_MovieId(const_cast<Process_4_Data0&>(c).m_MovieId)
            {
            }

            KeyStruct(KeyStruct & c) :
                m_MovieId(c.m_MovieId)
            {
            }

            KeyStruct(const KeyStruct & c, IncrementalAllocator * alloc) :
                m_MovieId(const_cast<KeyStruct&>(c).m_MovieId)
            {
            }

            KeyStruct() :
                m_MovieId(0)
            {
            }
#if defined(SCOPE_DEBUG)
            friend ostream & operator<<(ostream & os, KeyStruct & row)
            {
                os << "\tMovieId:\t" << row.m_MovieId << endl;
              return os;
            }
#endif // defined(SCOPE_DEBUG)
        };

        typedef KeyStruct KeyType;

        static int Compare(Process_4_Data0 & row, KeyType & key)
        {
            int r = 0;
            if ((r = ScopeTypeCompare(row.m_MovieId, key.m_MovieId)) != 0)
                return r;
            return r;
        }

        static int Compare(Process_4_Data0 * n1, Process_4_Data0 * n2)
        {
            int r = 0;
            if ((r = ScopeTypeCompare((*n1).m_MovieId, (*n2).m_MovieId)) != 0)
                return r;
            return r;
        }

    };

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

#if defined(COMPILE_NATIVE)
    template<> 
    class AggregationPolicy<typename Process_4_Data0, typename Process_4_Data0, UID_Process_7> 
    {
    public:
        
        AggregationPolicy()
            :
            m_MovieId_MovieId_FIRST("FIRST_MovieId_MovieId"),
            m_partialagg2___partialagg2___UNCHECKED_SUM("UNCHECKED_SUM_partialagg2___partialagg2__"),
            m_partialagg3___partialagg3___SUM("SUM_partialagg3___partialagg3__"),
            m_partialagg4___partialagg4___UNCHECKED_SUM("UNCHECKED_SUM_partialagg4___partialagg4__")
        {
        }
        
        // begin key range (copy grouping key to output)
        void BeginKey(KeyComparePolicy<Process_4_Data0,UID_Process_7>::KeyType * input, Process_4_Data0 * output)
        {
            (*output).m_MovieId = (*input).m_MovieId;
        }

        // process input row, called for each row in key range
        void AddRow(Process_4_Data0 * input)
        {
            m_MovieId_MovieId_FIRST.Add((*input).m_MovieId);
            m_partialagg2___partialagg2___UNCHECKED_SUM.Add((*input).m_partialagg2__);
            m_partialagg3___partialagg3___SUM.Add((*input).m_partialagg3__);
            m_partialagg4___partialagg4___UNCHECKED_SUM.Add((*input).m_partialagg4__);
        }

        // write aggregated data, called after key is completely scanned
        void Aggregate(Process_4_Data0 * output)
        {
            m_MovieId_MovieId_FIRST.Aggregate(&(*output).m_MovieId);
            m_partialagg2___partialagg2___UNCHECKED_SUM.Aggregate(&(*output).m_partialagg2__);
            m_partialagg3___partialagg3___SUM.Aggregate(&(*output).m_partialagg3__);
            m_partialagg4___partialagg4___UNCHECKED_SUM.Aggregate(&(*output).m_partialagg4__);
        }

        // write aggregated data
        void GetValue(Process_4_Data0 * output)
        {
            m_MovieId_MovieId_FIRST.GetValue(&(*output).m_MovieId);
            m_partialagg2___partialagg2___UNCHECKED_SUM.GetValue(&(*output).m_partialagg2__);
            m_partialagg3___partialagg3___SUM.GetValue(&(*output).m_partialagg3__);
            m_partialagg4___partialagg4___UNCHECKED_SUM.GetValue(&(*output).m_partialagg4__);
        }

        // reset for new key
        void Reset()
        {
            m_MovieId_MovieId_FIRST.Reset();
            m_partialagg2___partialagg2___UNCHECKED_SUM.Reset();
            m_partialagg3___partialagg3___SUM.Reset();
            m_partialagg4___partialagg4___UNCHECKED_SUM.Reset();
        }

        // store statistics
		__declspec(noinline)
        void WriteRuntimeStats(TreeNode & root)
        {
            m_MovieId_MovieId_FIRST.WriteRuntimeStats(root);
            m_partialagg2___partialagg2___UNCHECKED_SUM.WriteRuntimeStats(root);
            m_partialagg3___partialagg3___SUM.WriteRuntimeStats(root);
            m_partialagg4___partialagg4___UNCHECKED_SUM.WriteRuntimeStats(root);
        }

        // get operator resource requirements
        OperatorRequirements GetOperatorRequirements()
        {
            OperatorRequirements result;
            result.Add(m_MovieId_MovieId_FIRST.GetOperatorRequirements());
            result.Add(m_partialagg2___partialagg2___UNCHECKED_SUM.GetOperatorRequirements());
            result.Add(m_partialagg3___partialagg3___SUM.GetOperatorRequirements());
            result.Add(m_partialagg4___partialagg4___UNCHECKED_SUM.GetOperatorRequirements());
            return result;
        }

    private:
        Aggregate_FIRST<int> m_MovieId_MovieId_FIRST;
        Aggregate_UNCHECKED_SUM<__int64,__int64> m_partialagg2___partialagg2___UNCHECKED_SUM;
        Aggregate_SUM<NativeNullable<ScopeDecimal>,NativeNullable<ScopeDecimal>> m_partialagg3___partialagg3___SUM;
        Aggregate_UNCHECKED_SUM<__int64,__int64> m_partialagg4___partialagg4___UNCHECKED_SUM;
    };
#endif // defined(COMPILE_NATIVE)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    template<> 
    class KeyComparePolicy<Process_4_Data0,UID_Process_6>
    {
    public:
        struct KeyStruct
        {
            int m_MovieId;

            KeyStruct(Process_4_Data0 & c) :
                m_MovieId(c.m_MovieId)
            {
            }

            KeyStruct(const Process_4_Data0 & c, IncrementalAllocator * alloc) :
                m_MovieId(const_cast<Process_4_Data0&>(c).m_MovieId)
            {
            }

            KeyStruct(KeyStruct & c) :
                m_MovieId(c.m_MovieId)
            {
            }

            KeyStruct(const KeyStruct & c, IncrementalAllocator * alloc) :
                m_MovieId(const_cast<KeyStruct&>(c).m_MovieId)
            {
            }

            KeyStruct() :
                m_MovieId(0)
            {
            }
#if defined(SCOPE_DEBUG)
            friend ostream & operator<<(ostream & os, KeyStruct & row)
            {
                os << "\tMovieId:\t" << row.m_MovieId << endl;
              return os;
            }
#endif // defined(SCOPE_DEBUG)
        };

        typedef KeyStruct KeyType;

        static int Compare(Process_4_Data0 & row, KeyType & key)
        {
            int r = 0;
            if ((r = ScopeTypeCompare(row.m_MovieId, key.m_MovieId)) != 0)
                return r;
            return r;
        }

        static int Compare(Process_4_Data0 * n1, Process_4_Data0 * n2)
        {
            int r = 0;
            if ((r = ScopeTypeCompare((*n1).m_MovieId, (*n2).m_MovieId)) != 0)
                return r;
            return r;
        }

        // Key function for MKQsort algorithm
        static __int64 Key(Process_4_Data0 * p, int depth)
        {
            if (depth < 1)
            {
                // We only support interger number as MKQsort key for now
                return (__int64)((*p).m_MovieId);
            }

            --depth;

            return 0;
        }

        // End of Key function for MKQSort algorithm
        static bool EofKey(Process_4_Data0 * p, int depth)
        {
            --depth;
            if (depth < 0)
                return false;
            return true;
        }
    };

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

#if defined(COMPILE_NATIVE)
    template<> 
    class TextExtractPolicy<Extract_3_Data0, UID_Extract_3>
    {
    public:
        static bool Deserialize(TextInputStream<TextInputStreamTraitsConst<'\t', '\0', '\0', false, true, UTF8, true, false, false, 0, CharFormat_uint16>, CosmosInput> * input, Extract_3_Data0 & row)
        {
            for(;;)
            {
                try
                {
                    // When we start a new row we always skip all empty lines first.
                    if (!input->StartRow())
                    {
                        return false;
                    }

                    input->Read(row.m_UserId);
                    input->Read(row.m_MovieId);
                    input->Read(row.m_Rating);
                    input->Read(row.m_Timestamp);

                    if (!input->EndRow())
                    {
                        // Too many columns in row - report error.
                        throw ScopeStreamExceptionWithEvidence(
                            E_EXTRACT_ROW_DELIMITER_EXPECTED,
                            { input->CurrentLineNumber(), input->CurrentField() },
                            EvidenceFormatter::FormatText(
                                input->GetBufferStart(),
                                input->GetReadPosition(),
                                input->GetBufferEnd(),
                                input->rowDelimiter,
                                input->delimiter));
                    }
                    return true;
                }
                catch (const TextEncodingException& /* e */)
                {
                    std::throw_with_nested(ExtractException(
                        E_EXTRACT_ENCODING_ERROR,
                        { input->CurrentLineNumber() },
                        false));
                }
                catch (const TextConversionException& e)
                {
                    std::throw_with_nested(ExtractException(
                        E_EXTRACT_ROW_ERROR,
                        { e.GetRowNumber(), e.GetColumnIndex(), GetColumnName(e.GetColumnIndex()) },
                        false));
                }
                catch (const RuntimeMemoryException& /* e */)
                {
                    std::throw_with_nested(ScopeStreamExceptionWithEvidence(
                        E_EXTRACT_ROW_TOO_LONG,
                        { input->CurrentLineNumber(), Configuration::GetGlobal().GetMaxInMemoryRowSize() },
                        EvidenceFormatter::FormatText(
                            input->GetBufferStart(),
                            input->GetReadPosition(),
                            input->GetBufferEnd(),
                            input->rowDelimiter,
                            input->delimiter)));
                }
                catch (const ScopeStreamException& e)
                {
                    switch(e.Error())
                    {
                    // Following error will terminate read
                    case ScopeStreamException::EndOfFile:
                    case ScopeStreamException::BadDevice:
                        return false;

                    // Bad rows throw exception
                    case ScopeStreamException::UnexpectedNewLine:
                        // Wrong number of columns in row - report error
                        // At this point, line number is increased to point at the next line. Subtract 1 to get line
                        // number of the offending row.
                        throw ScopeStreamExceptionWithEvidence(
                            E_EXTRACT_UNEXPECTED_ROW_DELIMITER,
                            { input->CurrentLineNumber() - 1, 4, input->CurrentField() },
                            EvidenceFormatter::FormatText(
                                input->GetBufferStart(),
                                input->GetReadPosition(),
                                input->GetBufferEnd(),
                                input->rowDelimiter,
                                input->delimiter));

                    // All exceptions should be handled above.
                    default:
                        SCOPE_ASSERT(false);
                    }
                }
            }
        }
        static const char* GetColumnName(std::size_t columnIndex)
        {
            static const std::array<const char*, 5> c_columnNames =
            {
                "UserId",
                "MovieId",
                "Rating",
                "Timestamp",
                "*** END ***"
            };

            auto idx = std::min(columnIndex, c_columnNames.size() - 1);
            return c_columnNames[idx];
        }
    };

#endif // defined(COMPILE_NATIVE)

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

    static const char * StringTable_Process_4 [] =
    {
        "MovieId",
        "1L",
        "(decimal?)((decimal)Rating)",
        "1L",
        "\"*** After Last Expression ***\"",
    };
    template<> 
    class RowTransformPolicy<typename Extract_3_Data0, typename Process_4_Data0, UID_Process_4>
    {
    public:

        static bool FilterTransformRow(Extract_3_Data0 & input, Process_4_Data0 & output, IncrementalAllocator * alloc)
        {
            int exceptionIndex = 0;
            try
            {
                output.m_MovieId = input.m_MovieId;
                exceptionIndex++;
                output.m_partialagg2__ = 1LL;
                exceptionIndex++;
                output.m_partialagg3__ = scope_cast<NativeNullable<ScopeDecimal>>((scope_cast<ScopeDecimal>(input.m_Rating)));
                exceptionIndex++;
                output.m_partialagg4__ = 1LL;
                exceptionIndex++;

                return true;
            }
            catch(ExceptionWithStack& e)
            {
                throw RuntimeExpressionException(StringTable_Process_4[exceptionIndex], "<not supplied>", e);
            }
            catch(...)
            {
                throw RuntimeExpressionException(StringTable_Process_4[exceptionIndex]);
            }
        }


        #pragma warning(push)
        #pragma warning(disable: 4100) // 'alloc': unreferenced formal parameter
        static __declspec(noinline) void InitializeStatics(IncrementalAllocator * alloc)
        {
        #pragma warning(pop)
        }

        // get operator resource requirements
        static OperatorRequirements GetOperatorRequirements()
        {
            return OperatorRequirements().AddMemoryInRows(1, 1);
        }
    };



// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

    template<> 
    class RowTransformPolicy<typename Process_4_Data0, typename Process_4_Data0, UID_Process_5>
    {
    public:

        static bool FilterTransformRow(Process_4_Data0 & input, Process_4_Data0 & output, IncrementalAllocator * alloc)
        {
        }


        #pragma warning(push)
        #pragma warning(disable: 4100) // 'alloc': unreferenced formal parameter
        static __declspec(noinline) void InitializeStatics(IncrementalAllocator * alloc)
        {
        #pragma warning(pop)
        }

        // get operator resource requirements
        static OperatorRequirements GetOperatorRequirements()
        {
            return OperatorRequirements();
        }
    };



// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

#if defined(COMPILE_NATIVE)

    template<>
    struct HashAggregationPolicyV2<Process_4_Data0, Process_4_Data0, UID_Process_5>
    {
        struct Hash
        {
            const INT64 m_seed;

            Hash() : m_seed((INT64)0)
            {
            }

            Hash(INT64 seed) : m_seed(seed)
            {
            }

            INT64 operator () (const HashAggregatorKey_Process_5& schema) const
            {
                INT64 result = m_seed;
                result += ScopeHash(schema.m_MovieId);
                return result;
            }
        };
        struct EqualTo
        {
            bool operator () (const HashAggregatorKey_Process_5& left, const HashAggregatorKey_Process_5& right) const
            {
                if (!ScopeTypeCompare_EqualEqual(left.m_MovieId, right.m_MovieId)) return false;
                return true;
            }
        };
        struct RowHash
        {
            const INT64 m_seed;

            RowHash() : m_seed((INT64)0) {}
            RowHash(INT64 seed) : m_seed(seed) {}

            INT64 operator () (const Process_4_Data0& schema) const
            {
                INT64 result = m_seed;
                    result += ScopeHash(schema.m_MovieId);
                
                return result;
            }
        };

        struct RowEqualTo
        {
            bool operator () (const Process_4_Data0& left, const HashAggregatorKey_Process_5& right) const
            {
                if (!ScopeTypeCompare_EqualEqual(left.m_MovieId, right.m_MovieId)) return false;
                return true;
            }
        };
 
        typedef HashAggregatorKey_Process_5 KeySchema;
        typedef HashAggregatorState_Process_5 ValueSchema;

        static const RowHash& RowHashF()
        {
            static RowHash hash;
            return hash;
        }
        
        static const RowEqualTo& RowPredF()
        {
            static RowEqualTo pred;
            return pred;
        }

        static const size_t s_memoryQuota{ 3059744767ULL }; // Cosmos default is 2GB
        
        // the maximum number of buckets in the hashtable is defined as 
        // s_directorySize * 2^s_segmentSizeExponent => 67 108 864
        // s_directorySize has to be a power of two
        static const size_t s_directorySize{ 4096 };
        static const size_t s_segmentSizeExponent{ 14 }; // 16384 bucket per segment

         // initial number of buckets in the hashtable
         // s_initialSize has to be a power of two
        static const size_t s_initialSize { 128 * (1 << s_segmentSizeExponent) };

        static       double MaxLoadFactor() { return 2.; }
        static const bool   s_valueSchemaHasDeepData{ false };

        // Shallow copy input schema fields to key schema
        static void ShallowCopyRowToKey(const Process_4_Data0 & row, KeySchema & key)
        {
           key.m_MovieId = row.m_MovieId;
        }

        static void DeepCopyRowToKey(const Process_4_Data0 & row, KeySchema & key, IncrementalAllocator* alloc)
        {
           key.m_MovieId = row.m_MovieId;
        }

        // Init value schema fields with default aggregate states, shallow copy
        static void ShallowCopyRowToValue(const Process_4_Data0 & row, ValueSchema & value)
        {
           Aggregate_UNCHECKED_SUM<__int64, __int64>::Init(value.m_UNCHECKED_SUM_partialagg2__, row.m_partialagg2__);
           Aggregate_SUM<NativeNullable<ScopeDecimal>, NativeNullable<ScopeDecimal>>::Init(value.m_SUM_partialagg3__, value.m_SUM_fEmpty_partialagg3__, row.m_partialagg3__);
           Aggregate_UNCHECKED_SUM<__int64, __int64>::Init(value.m_UNCHECKED_SUM_partialagg4__, row.m_partialagg4__);
        }

        // Init value schema fields with default aggregate states, deep copy
        static void DeepCopyRowToValue(const Process_4_Data0 & row, ValueSchema & value, IncrementalAllocator* alloc)
        {
           Aggregate_UNCHECKED_SUM<__int64, __int64>::Init(value.m_UNCHECKED_SUM_partialagg2__, row.m_partialagg2__);
           Aggregate_SUM<NativeNullable<ScopeDecimal>, NativeNullable<ScopeDecimal>>::Init(value.m_SUM_partialagg3__, value.m_SUM_fEmpty_partialagg3__, row.m_partialagg3__);
           Aggregate_UNCHECKED_SUM<__int64, __int64>::Init(value.m_UNCHECKED_SUM_partialagg4__, row.m_partialagg4__);
        }

        // Init value schema fields with default aggregate states, deep copy
        static void UpdateValue(ValueSchema & state, const Process_4_Data0 & update, IncrementalAllocator* alloc)
        {
                Aggregate_UNCHECKED_SUM<__int64, __int64>::UpdateState(state.m_UNCHECKED_SUM_partialagg2__, update.m_partialagg2__);
                Aggregate_SUM<NativeNullable<ScopeDecimal>, NativeNullable<ScopeDecimal>>::UpdateState(state.m_SUM_partialagg3__, state.m_SUM_fEmpty_partialagg3__, update.m_partialagg3__);
                Aggregate_UNCHECKED_SUM<__int64, __int64>::UpdateState(state.m_UNCHECKED_SUM_partialagg4__, update.m_partialagg4__);
        }


        // Shallow copy key and aggregated states to the output
        static void GetOutput(const KeySchema & key, const ValueSchema & value, Process_4_Data0 & row)
        {
            row.m_MovieId = key.m_MovieId;
            Aggregate_UNCHECKED_SUM<__int64, __int64>::GetAggregatedValue(value.m_UNCHECKED_SUM_partialagg2__, &row.m_partialagg2__);
            Aggregate_SUM<NativeNullable<ScopeDecimal>, NativeNullable<ScopeDecimal>>::GetAggregatedValue(value.m_SUM_partialagg3__, value.m_SUM_fEmpty_partialagg3__, &row.m_partialagg3__);
            Aggregate_UNCHECKED_SUM<__int64, __int64>::GetAggregatedValue(value.m_UNCHECKED_SUM_partialagg4__, &row.m_partialagg4__);
        }


    };
#endif // defined(COMPILE_NATIVE)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.



// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

    template<> 
    class RowTransformPolicy<typename Process_4_Data0, typename Process_4_Data0, UID_Process_7>
    {
    public:

        static bool FilterTransformRow(Process_4_Data0 & input, Process_4_Data0 & output, IncrementalAllocator * alloc)
        {
        }


        #pragma warning(push)
        #pragma warning(disable: 4100) // 'alloc': unreferenced formal parameter
        static __declspec(noinline) void InitializeStatics(IncrementalAllocator * alloc)
        {
        #pragma warning(pop)
        }

        // get operator resource requirements
        static OperatorRequirements GetOperatorRequirements()
        {
            return OperatorRequirements();
        }
    };



// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

    template<> 
    class RowTransformPolicy<typename Process_4_Data0, typename SV2_Extract_out0, UID_Process_8>
    {
    public:

        static bool FilterTransformRow(Process_4_Data0 & input, SV2_Extract_out0 & output, IncrementalAllocator * alloc)
        {
           output.m_MovieId1 = input.m_MovieId;
            return true;
        }


        #pragma warning(push)
        #pragma warning(disable: 4100) // 'alloc': unreferenced formal parameter
        static __declspec(noinline) void InitializeStatics(IncrementalAllocator * alloc)
        {
        #pragma warning(pop)
        }

        // get operator resource requirements
        static OperatorRequirements GetOperatorRequirements()
        {
            return OperatorRequirements();
        }
    };



// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_MANAGED)
    template<>
    struct ManagedUDO<UID_Process_8>
    {
        typedef Microsoft::Analytics::Interfaces::IProcessor UDO;

        ManagedUDO(std::string * argv, int argc)
        {
            try
            {
                m_udo.reset(___Scope_Generated_Classes___::__OperatorFactory__::Create_Process_8());
                m_args.reset(gcnew Generic::List<String^>(ConvertArgsToArray(std::wstring{})));
            }
            catch (Exception ^ex)
            {
                ScopeEngineManaged::UserExceptionHelper::WrapUserException(___Scope_Generated_Classes___::__OperatorFactory__::Name_Process_8, "Constructor", ex);
                throw;
            }
        }


        UDO^ get()
        {
            return m_udo.get();
        }

        Generic::List<String^>^ args()
        {
            return m_args.get();
        }
        cli::array<String^>^ ReadOnlyColumns_Output()
        {
            return nullptr;
        }
        
        cli::array<String^>^ ReadOnlyColumns_Input()
        {
            return nullptr;
        }

    private:
        ScopeTypedManagedHandle<UDO^> m_udo;
        ScopeTypedManagedHandle<Generic::List<String^>^> m_args;
        ManagedUDO & operator=(ManagedUDO &);
    };
    template<>
    class InteropToNativeRowPolicy<SV2_Extract_out0, UID_Process_8>
    {
    public:
        static void Marshal(ScopeEngineManaged::SqlIpRow^ managedRow, SV2_Extract_out0& nativeRow, IncrementalAllocator* alloc)
        {
            ScopeManagedInterop::CopyToNativeColumn(nativeRow.m_NumberOfRatings, managedRow->GetInternal<System::Nullable<System::Int64>>(0), alloc);
            ScopeManagedInterop::CopyToNativeColumn(nativeRow.m_AvgRating, managedRow->GetInternal<System::Decimal>(1), alloc);
        }
    };
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.



#if defined(COMPILE_NATIVE)
namespace ScopeGeneratedClasses
{
    extern "C" __declspec(dllexport) void __stdcall SV2_Extract_execute(std::string * argv, int argc, InputFileInfo* inputs, int inputCnt, OutputFileInfo* outputs, int outputCnt, VertexExecutionInfo * vertexExecutionInfo)
    {
#ifdef USE_SSE4_2
        // check CPUID to make sure this machjine supports SSE4_2 instructions
        // - this is incase we download a cluster vertex and try and debug it on a machine that doesn't support these instructions
        int cpuInfo[4];
        __cpuid(cpuInfo, 0x00000001);
        //Array index | Bit range | Description 
        // 2          | 20        | SSE4.2 extensions
        if ((cpuInfo[2] & (1 << 20)) == 0)
        {
            throw RuntimeException(E_USER_ERROR, "Please recompile __ScopeCodeGenEngine__.dll without /DUSE_SSE4_2");
            return;
        }
#endif

        Configuration::Create(ET_Azure, false);

        SIZE_T x_inputBufSize, x_outputBufSize, x_inputVirtualMemoryLimit;
        int    x_inputBufCnt, x_outputBufCnt;
        
        MemoryManager::CalculateIOBufferSize(inputCnt, outputCnt, MemoryManager::x_vertexMemoryLimit, MemoryManager::x_vertexReserveMemory, x_inputBufSize, x_inputBufCnt, x_outputBufSize, x_outputBufCnt, x_inputVirtualMemoryLimit, false);

        const bool IsNativeOnlyVertex = false;
        // If we have more than one input, we will random shuffle it
        if (inputCnt - 0 > 1)
        {
            ScopeRandom scopeRandom((int)vertexExecutionInfo->m_vertexId);
            auto lambda = [&scopeRandom](int max)->int { return (scopeRandom.Next() % max + max) % max;}; // scopeRandom.Next() % max could be negative value
            random_shuffle(&inputs[0], inputs + inputCnt - 0, lambda ); 
        }
        // Define extractor type and construct objects
        // 
        typedef Extractor<Extract_3_Data0, TextExtractPolicy<Extract_3_Data0, UID_Extract_3>, TextInputStream<TextInputStreamTraitsConst<'\t', '\0', '\0', false, true, UTF8, true, false, false, 0, CharFormat_uint16>, CosmosInput>> ExtractorType1_SV2_Extract;
        unique_ptr<unique_ptr<ExtractorType1_SV2_Extract>[]> extractor_0_array(new unique_ptr<ExtractorType1_SV2_Extract>[inputCnt - 0]);
        
        for (int i = 0; i < inputCnt; i++)
        {
            // 
            extractor_0_array[i - 0].reset(new ExtractorType1_SV2_Extract(inputs[i], false, x_inputBufSize, x_inputBufCnt, x_inputVirtualMemoryLimit, InputStreamParameters('\t', '\0', '\0', static_cast<const char*>(__nullptr), false, true, UTF8, true, false, 0, CharFormat_uint16), UID_Extract_3));
        }
        ExtractorType1_SV2_Extract ** extractor_0 = (ExtractorType1_SV2_Extract **)extractor_0_array.get();
        ULONG extractor_0_count = (ULONG) inputCnt - 0;
        // Define the type of the operator
        typedef FilterTransformer<ExtractorType1_SV2_Extract, Extract_3_Data0, Process_4_Data0, UID_Process_4> FilterTransformerType_Process_4;
        // Allocate memory for the operator array
        unique_ptr<unique_ptr<FilterTransformerType_Process_4>[]> filterTransformer_Process_4_array(new unique_ptr<FilterTransformerType_Process_4>[extractor_0_count]);
        
        // Construct operator objects
        for(ULONG i = 0; i < extractor_0_count; i++)
        {
            filterTransformer_Process_4_array[i].reset(new FilterTransformerType_Process_4(extractor_0[i], UID_Process_4)); 
        }
        
        FilterTransformerType_Process_4 ** filterTransformer_Process_4 = (FilterTransformerType_Process_4 **)filterTransformer_Process_4_array.get();
        ULONG filterTransformer_Process_4_count = extractor_0_count;
        // Merge streams N->1
        typedef ParallelUnionAll<FilterTransformerType_Process_4, Process_4_Data0, IsNativeOnlyVertex> UnionAllType_Process_4_Process_5_connector;
        unique_ptr<UnionAllType_Process_4_Process_5_connector> unionall_Process_4_Process_5_connector_ptr(new UnionAllType_Process_4_Process_5_connector(filterTransformer_Process_4,filterTransformer_Process_4_count,false,UID_ParallelUnionAll_Process_4));
        UnionAllType_Process_4_Process_5_connector * unionall_Process_4_Process_5_connector = unionall_Process_4_Process_5_connector_ptr.get();
        ULONG unionall_Process_4_Process_5_connector_count = 1;
        // Define hash aggregator type
        typedef LocalHashAggregatorV2<UnionAllType_Process_4_Process_5_connector, Process_4_Data0, Process_4_Data0, UID_Process_5> LocalHashAggregatorType_Process_5;
        // Construct operator and initialize it.
        unique_ptr<LocalHashAggregatorType_Process_5> localHashAggregator_Process_5_ptr (new LocalHashAggregatorType_Process_5(unionall_Process_4_Process_5_connector, UID_Process_5));
        LocalHashAggregatorType_Process_5 * localHashAggregator_Process_5 = localHashAggregator_Process_5_ptr.get();
        ULONG localHashAggregator_Process_5_count = 1;
        // Construct operator and initialize it.
        unique_ptr<OperatorDelegate<Process_4_Data0>> delegate_localHashAggregator_Process_5_ptr (new OperatorDelegate<Process_4_Data0>(OperatorDelegate<Process_4_Data0>::FromOperator(localHashAggregator_Process_5)));
        OperatorDelegate<Process_4_Data0> * delegate_localHashAggregator_Process_5 = delegate_localHashAggregator_Process_5_ptr.get();
        ULONG delegate_localHashAggregator_Process_5_count = 1;
        // Define sorter type
        typedef Sorter<Process_4_Data0> SorterType_Process_6;
        // Construct operator and initialize it.
        unique_ptr<SorterType_Process_6> sorter_Process_6_ptr (new SorterType_Process_6(delegate_localHashAggregator_Process_5, &StdSort<Process_4_Data0>::Sort<KeyComparePolicy<Process_4_Data0, UID_Process_6>, (sizeof(Process_4_Data0)<=CACHELINE_SIZE)>, ScopeLoserTreeDelegate<Process_4_Data0>::CreateDelegate<UID_Process_6>(), false, 2090860543 /*memoryQuota*/, UID_Process_6));
        SorterType_Process_6 * sorter_Process_6 = sorter_Process_6_ptr.get();
        ULONG sorter_Process_6_count = 1;
        // Define stream aggregator type
        typedef StreamAggregator<SorterType_Process_6, Process_4_Data0, Process_4_Data0, UID_Process_7> StreamAggregatorType_Process_7;
        // Construct operator and initialize it.
        unique_ptr<StreamAggregatorType_Process_7> streamAggregator_Process_7_ptr (new StreamAggregatorType_Process_7(sorter_Process_6, false, UID_Process_7));
        StreamAggregatorType_Process_7 * streamAggregator_Process_7 = streamAggregator_Process_7_ptr.get();
        ULONG streamAggregator_Process_7_count = 1;
        // Construct operator and initialize it.
        unique_ptr<OperatorDelegate<Process_4_Data0>> delegate_streamAggregator_Process_7_ptr (new OperatorDelegate<Process_4_Data0>(OperatorDelegate<Process_4_Data0>::FromOperator(streamAggregator_Process_7)));
        OperatorDelegate<Process_4_Data0> * delegate_streamAggregator_Process_7 = delegate_streamAggregator_Process_7_ptr.get();
        ULONG delegate_streamAggregator_Process_7_count = 1;
        // Define the type of the operator
        typedef ScopeProcessor<Process_4_Data0, SV2_Extract_out0> ProcessorType_Process_8;
        // Construct operator and initialize it.
        unique_ptr<ProcessorType_Process_8> processor_Process_8_ptr (new ProcessorType_Process_8(ScopeProcessorManagedFactory::MakeSqlIp<Process_4_Data0,SV2_Extract_out0,UID_Process_8>(delegate_streamAggregator_Process_7), delegate_streamAggregator_Process_7, UID_Process_8));
        ProcessorType_Process_8 * processor_Process_8 = processor_Process_8_ptr.get();
        ULONG processor_Process_8_count = 1;
        // Define outputer type
        typedef Outputer<ProcessorType_Process_8, SV2_Extract_out0, BinaryOutputPolicy<SV2_Extract_out0>, BinaryOutputStream, false> OutputerType2_SV2_Extract;
        // Construct operator and initialize it
        unique_ptr<OutputerType2_SV2_Extract> outputer_SV2_Extract_out0_ptr(new OutputerType2_SV2_Extract(processor_Process_8, outputs[0].outputFileName, false, x_outputBufSize, x_outputBufCnt, UID_SV2_Extract_out0));
        OutputerType2_SV2_Extract * outputer_SV2_Extract_out0 = outputer_SV2_Extract_out0_ptr.get();
        try
        {
            // Init operator chain
            outputer_SV2_Extract_out0->Init();

            // Execute the whole vertex by calling the GetNextRow on top operator
            SV2_Extract_out0 row;
            outputer_SV2_Extract_out0->GetNextRow(row);
    
            // Close operator chain
            outputer_SV2_Extract_out0->Close();
        }
        catch (const ExceptionWithStack& ex)
        {
            if (vertexExecutionInfo->m_reportStatusFunc != NULL)
            {
                ErrorManager::GetGlobal()->SetError(std::current_exception(), "VertexExecute");
                vertexExecutionInfo->m_reportStatusFunc(vertexExecutionInfo->m_statusReportContext);
            }
            
            std::cout << "Caught exception: " << ex.what() << std::endl << ex.GetStack() << std::endl;
            throw;
        }


        // Write out execution stats
        MemoryManager::GetGlobal()->WriteRuntimeStats(vertexExecutionInfo->m_statsRoot);
        outputer_SV2_Extract_out0->WriteRuntimeStats(vertexExecutionInfo->m_statsRoot);
    }
}
#endif // defined(COMPILE_NATIVE)

#if defined(COMPILE_MANAGED)
template ScopeProcessorManaged<Process_4_Data0, SV2_Extract_out0> * ScopeEngine::ScopeProcessorManagedFactory::MakeSqlIp<Process_4_Data0, SV2_Extract_out0, UID_Process_8>(OperatorDelegate<Process_4_Data0>*);
#endif // defined(COMPILE_MANAGED)

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.



#endif
#pragma endregion SV2_Extract
#pragma region SV3_Combine
#if defined(COMPILE_SV3_COMBINE) || defined(COMPILE_ALL_VERTICES)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    template<> 
    class KeyComparePolicy<Process_10_Data0,UID_Process_11>
    {
    public:
        struct KeyStruct
        {
            ScopeDecimal m_AvgRating;

            KeyStruct(Process_10_Data0 & c) :
                m_AvgRating(c.m_AvgRating)
            {
            }

            KeyStruct(const Process_10_Data0 & c, IncrementalAllocator * alloc) :
                m_AvgRating(const_cast<Process_10_Data0&>(c).m_AvgRating)
            {
            }

            KeyStruct(KeyStruct & c) :
                m_AvgRating(c.m_AvgRating)
            {
            }

            KeyStruct(const KeyStruct & c, IncrementalAllocator * alloc) :
                m_AvgRating(const_cast<KeyStruct&>(c).m_AvgRating)
            {
            }

            KeyStruct() :
                m_AvgRating()
            {
            }
#if defined(SCOPE_DEBUG)
            friend ostream & operator<<(ostream & os, KeyStruct & row)
            {
                os << "\tAvgRating:\t" << row.m_AvgRating << endl;
              return os;
            }
#endif // defined(SCOPE_DEBUG)
        };

        typedef KeyStruct KeyType;

        static int Compare(Process_10_Data0 & row, KeyType & key)
        {
            int r = 0;
            if ((r = ScopeTypeCompare(row.m_AvgRating, key.m_AvgRating)) != 0)
                return -r;
            return r;
        }

        static int Compare(Process_10_Data0 * n1, Process_10_Data0 * n2)
        {
            int r = 0;
            if ((r = ScopeTypeCompare((*n1).m_AvgRating, (*n2).m_AvgRating)) != 0)
                return -r;
            return r;
        }

        // Key function for MKQsort algorithm
        static __int64 Key(Process_10_Data0 * p, int depth)
        {

            return 0;
        }

        // End of Key function for MKQSort algorithm
        static bool EofKey(Process_10_Data0 * p, int depth)
        {
            return true;
        }
    };

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    template<> 
    class KeyComparePolicy<Process_1_Data0,UID_Join_9_0>
    {
    public:
        struct KeyStruct
        {
            int m_MovieId;

            KeyStruct(Process_1_Data0 & c) :
                m_MovieId(c.m_MovieId)
            {
            }

            KeyStruct(const Process_1_Data0 & c, IncrementalAllocator * alloc) :
                m_MovieId(const_cast<Process_1_Data0&>(c).m_MovieId)
            {
            }

            KeyStruct(KeyStruct & c) :
                m_MovieId(c.m_MovieId)
            {
            }

            KeyStruct(const KeyStruct & c, IncrementalAllocator * alloc) :
                m_MovieId(const_cast<KeyStruct&>(c).m_MovieId)
            {
            }

            KeyStruct() :
                m_MovieId(0)
            {
            }
#if defined(SCOPE_DEBUG)
            friend ostream & operator<<(ostream & os, KeyStruct & row)
            {
                os << "\tMovieId:\t" << row.m_MovieId << endl;
              return os;
            }
#endif // defined(SCOPE_DEBUG)
        };

        typedef KeyStruct KeyType;

        static int Compare(Process_1_Data0 & row, KeyType & key)
        {
            int r = 0;
            if ((r = ScopeTypeCompare(row.m_MovieId, key.m_MovieId)) != 0)
                return r;
            return r;
        }

        static int Compare(Process_1_Data0 * n1, Process_1_Data0 * n2)
        {
            int r = 0;
            if ((r = ScopeTypeCompare((*n1).m_MovieId, (*n2).m_MovieId)) != 0)
                return r;
            return r;
        }

    };

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    template<> 
    class KeyComparePolicy<SV2_Extract_out0,UID_Join_9_1>
    {
    public:
        struct KeyStruct
        {
            int m_MovieId1;

            KeyStruct(SV2_Extract_out0 & c) :
                m_MovieId1(c.m_MovieId1)
            {
            }

            KeyStruct(const SV2_Extract_out0 & c, IncrementalAllocator * alloc) :
                m_MovieId1(const_cast<SV2_Extract_out0&>(c).m_MovieId1)
            {
            }

            KeyStruct(KeyStruct & c) :
                m_MovieId1(c.m_MovieId1)
            {
            }

            KeyStruct(const KeyStruct & c, IncrementalAllocator * alloc) :
                m_MovieId1(const_cast<KeyStruct&>(c).m_MovieId1)
            {
            }

            KeyStruct() :
                m_MovieId1(0)
            {
            }
#if defined(SCOPE_DEBUG)
            friend ostream & operator<<(ostream & os, KeyStruct & row)
            {
                os << "\tMovieId1:\t" << row.m_MovieId1 << endl;
              return os;
            }
#endif // defined(SCOPE_DEBUG)
        };

        typedef KeyStruct KeyType;

        static int Compare(SV2_Extract_out0 & row, KeyType & key)
        {
            int r = 0;
            if ((r = ScopeTypeCompare(row.m_MovieId1, key.m_MovieId1)) != 0)
                return r;
            return r;
        }

        static int Compare(SV2_Extract_out0 * n1, SV2_Extract_out0 * n2)
        {
            int r = 0;
            if ((r = ScopeTypeCompare((*n1).m_MovieId1, (*n2).m_MovieId1)) != 0)
                return r;
            return r;
        }

    };

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_NATIVE)
    template<> 
    class CombinerPolicy<UID_Join_9> 
    {
    public:
        typedef KeyComparePolicy<Process_1_Data0,UID_Join_9_0> LeftKeyPolicy;
        typedef KeyComparePolicy<SV2_Extract_out0,UID_Join_9_1> RightKeyPolicy;

        static const unsigned MaxPerKeyCrossSizeLimit = 0;

        static LONGLONG JoinerMemQuota()
        {
            return 1465909246ULL;
        }

        // compare key from left and right schema object
        static int Compare(const Process_1_Data0 * left, const SV2_Extract_out0 * right)
        {
            int r = 0;
            Process_1_Data0 * n1 = const_cast<Process_1_Data0 *>(left);
            SV2_Extract_out0 * n2 = const_cast<SV2_Extract_out0 *>(right);

            if ((r = ScopeTypeCompare((*n1).m_MovieId, (*n2).m_MovieId1)) != 0)
                return r;
            
            // Everything matches
            return 0;
        }

        static void CopyRow(Process_1_Data0 * left, SV2_Extract_out0 * right, Join_9_Data0 * out)
        {
                (*out).m_MovieId = (*left).m_MovieId;
                (*out).m_Title = (*left).m_Title;
                (*out).m_NumberOfRatings = (*right).m_NumberOfRatings;
                (*out).m_AvgRating = (*right).m_AvgRating;
        }

        static void CopyLeftRow(Process_1_Data0 * left, Join_9_Data0 * out)
        {
            (*out).m_MovieId = (*left).m_MovieId;
            (*out).m_Title = (*left).m_Title;
        }

        static void NullifyRightSide(Join_9_Data0 * out)
        {
            (*out).m_NumberOfRatings.SetNull();
        }

        static void CopyRightRow(SV2_Extract_out0 * right, Join_9_Data0 * out)
        {
            (*out).m_NumberOfRatings = (*right).m_NumberOfRatings;
            (*out).m_AvgRating = (*right).m_AvgRating;
        }

        static void NullifyLeftSide(Join_9_Data0 * out)
        {
            (*out).m_Title.SetNull();
        }
    };
#endif // defined(COMPILE_NATIVE)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.



// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

    static const char * StringTable_Process_10 [] =
    {
        "Title",
        "NumberOfRatings",
        "AvgRating",
        "MovieId",
        "\"*** After Last Expression ***\"",
    };
    template<> 
    class RowTransformPolicy<typename Join_9_Data0, typename Process_10_Data0, UID_Process_10>
    {
    public:

        static bool FilterTransformRow(Join_9_Data0 & input, Process_10_Data0 & output, IncrementalAllocator * alloc)
        {
            int exceptionIndex = 0;
            try
            {
                output.m_Title = input.m_Title;
                exceptionIndex++;
                output.m_NumberOfRatings = input.m_NumberOfRatings;
                exceptionIndex++;
                output.m_AvgRating = input.m_AvgRating;
                exceptionIndex++;
                output.m_InfoMovieId = input.m_MovieId;
                exceptionIndex++;

                return true;
            }
            catch(ExceptionWithStack& e)
            {
                throw RuntimeExpressionException(StringTable_Process_10[exceptionIndex], "<not supplied>", e);
            }
            catch(...)
            {
                throw RuntimeExpressionException(StringTable_Process_10[exceptionIndex]);
            }
        }


        #pragma warning(push)
        #pragma warning(disable: 4100) // 'alloc': unreferenced formal parameter
        static __declspec(noinline) void InitializeStatics(IncrementalAllocator * alloc)
        {
        #pragma warning(pop)
        }

        // get operator resource requirements
        static OperatorRequirements GetOperatorRequirements()
        {
            return OperatorRequirements().AddMemoryInRows(1, 1);
        }
    };



// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

    static const char * StringTable_Process_12 [] =
    {
        "InfoMovieId",
        "Title",
        "NumberOfRatings",
        "AvgRating",
        "\"*** After Last Expression ***\"",
    };
    template<> 
    class RowTransformPolicy<typename Process_10_Data0, typename Process_12_Data0, UID_Process_12>
    {
    public:

        static bool FilterTransformRow(Process_10_Data0 & input, Process_12_Data0 & output, IncrementalAllocator * alloc)
        {
            int exceptionIndex = 0;
            try
            {
                output.m_InfoMovieId = input.m_InfoMovieId;
                exceptionIndex++;
                output.m_Title = input.m_Title;
                exceptionIndex++;
                output.m_NumberOfRatings = input.m_NumberOfRatings;
                exceptionIndex++;
                output.m_AvgRating = input.m_AvgRating;
                exceptionIndex++;

                return true;
            }
            catch(ExceptionWithStack& e)
            {
                throw RuntimeExpressionException(StringTable_Process_12[exceptionIndex], "<not supplied>", e);
            }
            catch(...)
            {
                throw RuntimeExpressionException(StringTable_Process_12[exceptionIndex]);
            }
        }


        #pragma warning(push)
        #pragma warning(disable: 4100) // 'alloc': unreferenced formal parameter
        static __declspec(noinline) void InitializeStatics(IncrementalAllocator * alloc)
        {
        #pragma warning(pop)
        }

        // get operator resource requirements
        static OperatorRequirements GetOperatorRequirements()
        {
            return OperatorRequirements().AddMemoryInRows(1, 1);
        }
    };



// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

    template<> 
    class TextOutputPolicy<Process_12_Data0, UID_SV3_Combine_out0>
    {
    public:

        static void Serialize(TextOutputStream<TextOutputStreamTraitsConst<',', '\0', false, false, true, false, true, UTF8, true, CharFormat_uint16>, CosmosOutput> * output, Process_12_Data0 & row)
        {
            output->Write<int,false>(row.m_InfoMovieId);
            output->WriteDelimiter();
            if (!row.m_Title.IsNull())
            {
                output->Write<FString,true>(row.m_Title);
            }
            output->WriteDelimiter();
            if (!row.m_NumberOfRatings.IsNull())
            {
                output->Write<__int64,false>(row.m_NumberOfRatings);
            }
            output->WriteDelimiter();
            output->Write<ScopeDecimal,false>(row.m_AvgRating);
            output->WriteNewLine();
        }

        static void SerializeHeader(TextOutputStream<TextOutputStreamTraitsConst<',', '\0', false, false, true, false, true, UTF8, true, CharFormat_uint16>, CosmosOutput> * output)
        {
            SCOPE_ASSERT(!"TextOutputPolicy::SerializeHeader method should not be invoked.");
        }
    };

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.



#if defined(COMPILE_NATIVE)
namespace ScopeGeneratedClasses
{
    extern "C" __declspec(dllexport) void __stdcall SV3_Combine_execute(std::string * argv, int argc, InputFileInfo* inputs, int inputCnt, OutputFileInfo* outputs, int outputCnt, VertexExecutionInfo * vertexExecutionInfo)
    {
#ifdef USE_SSE4_2
        // check CPUID to make sure this machjine supports SSE4_2 instructions
        // - this is incase we download a cluster vertex and try and debug it on a machine that doesn't support these instructions
        int cpuInfo[4];
        __cpuid(cpuInfo, 0x00000001);
        //Array index | Bit range | Description 
        // 2          | 20        | SSE4.2 extensions
        if ((cpuInfo[2] & (1 << 20)) == 0)
        {
            throw RuntimeException(E_USER_ERROR, "Please recompile __ScopeCodeGenEngine__.dll without /DUSE_SSE4_2");
            return;
        }
#endif

        Configuration::Create(ET_Azure, false);

        SIZE_T x_inputBufSize, x_outputBufSize, x_inputVirtualMemoryLimit;
        int    x_inputBufCnt, x_outputBufCnt;
        
        MemoryManager::CalculateIOBufferSize(inputCnt, outputCnt, MemoryManager::x_vertexMemoryLimit, MemoryManager::x_vertexReserveMemory, x_inputBufSize, x_inputBufCnt, x_outputBufSize, x_outputBufCnt, x_inputVirtualMemoryLimit, false);

        const bool IsNativeOnlyVertex = true;
        // Define extractor type and construct object
        typedef Extractor<Process_1_Data0, BinaryExtractPolicy<Process_1_Data0>, BinaryInputStream> ExtractorType1_SV3_Combine;        
        unique_ptr<ExtractorType1_SV3_Combine> extractor_0_ptr= make_unique<ExtractorType1_SV3_Combine>(inputs[0], false, x_inputBufSize, x_inputBufCnt, x_inputVirtualMemoryLimit, UID_SV1_Extract_out0);
        ExtractorType1_SV3_Combine * extractor_0 = extractor_0_ptr.get();
        ULONG extractor_0_count = 1;
        // Define extractor type and construct object
        typedef Extractor<SV2_Extract_out0, BinaryExtractPolicy<SV2_Extract_out0>, BinaryInputStream> ExtractorType2_SV3_Combine;        
        unique_ptr<ExtractorType2_SV3_Combine> extractor_1_ptr= make_unique<ExtractorType2_SV3_Combine>(inputs[1], false, x_inputBufSize, x_inputBufCnt, x_inputVirtualMemoryLimit, UID_SV2_Extract_out0);
        ExtractorType2_SV3_Combine * extractor_1 = extractor_1_ptr.get();
        ULONG extractor_1_count = 1;

        // Define the combiner operator
        typedef NativeCombinerWrapper<ExtractorType1_SV3_Combine, Process_1_Data0, ExtractorType2_SV3_Combine, SV2_Extract_out0, Join_9_Data0, InnerJoiner, UID_Join_9> CombinerType_Join_9;
        unique_ptr<CombinerType_Join_9> combiner_Join_9_ptr;
        combiner_Join_9_ptr.reset(new CombinerType_Join_9(extractor_0, extractor_1, UID_Join_9, 0, false, nullptr));
 
        CombinerType_Join_9 * combiner_Join_9 = combiner_Join_9_ptr.get();
        ULONG combiner_Join_9_count = 1;
        // Define the type of the operator
        typedef FilterTransformer<CombinerType_Join_9, Join_9_Data0, Process_10_Data0, UID_Process_10> FilterTransformerType_Process_10;
        // Construct operator and initialize it.
        unique_ptr<FilterTransformerType_Process_10> filterTransformer_Process_10_ptr (new FilterTransformerType_Process_10(combiner_Join_9, UID_Process_10));
        FilterTransformerType_Process_10 * filterTransformer_Process_10 = filterTransformer_Process_10_ptr.get();
        ULONG filterTransformer_Process_10_count = 1;
        // Construct operator and initialize it.
        unique_ptr<OperatorDelegate<Process_10_Data0>> delegate_filterTransformer_Process_10_ptr (new OperatorDelegate<Process_10_Data0>(OperatorDelegate<Process_10_Data0>::FromOperator(filterTransformer_Process_10)));
        OperatorDelegate<Process_10_Data0> * delegate_filterTransformer_Process_10 = delegate_filterTransformer_Process_10_ptr.get();
        ULONG delegate_filterTransformer_Process_10_count = 1;
        // Define sorter type
        typedef Sorter<Process_10_Data0> SorterType_Process_11;
        // Construct operator and initialize it.
        unique_ptr<SorterType_Process_11> sorter_Process_11_ptr (new SorterType_Process_11(delegate_filterTransformer_Process_10, &StdSort<Process_10_Data0>::Sort<KeyComparePolicy<Process_10_Data0, UID_Process_11>, (sizeof(Process_10_Data0)<=CACHELINE_SIZE)>, ScopeLoserTreeDelegate<Process_10_Data0>::CreateDelegate<UID_Process_11>(), false, 2826960892 /*memoryQuota*/, UID_Process_11));
        SorterType_Process_11 * sorter_Process_11 = sorter_Process_11_ptr.get();
        ULONG sorter_Process_11_count = 1;
        // Define the type of the operator
        typedef FilterTransformer<SorterType_Process_11, Process_10_Data0, Process_12_Data0, UID_Process_12> FilterTransformerType_Process_12;
        // Construct operator and initialize it.
        unique_ptr<FilterTransformerType_Process_12> filterTransformer_Process_12_ptr (new FilterTransformerType_Process_12(sorter_Process_11, UID_Process_12));
        FilterTransformerType_Process_12 * filterTransformer_Process_12 = filterTransformer_Process_12_ptr.get();
        ULONG filterTransformer_Process_12_count = 1;
        // Define outputer type
        typedef Outputer<FilterTransformerType_Process_12, Process_12_Data0, TextOutputPolicy<Process_12_Data0, UID_SV3_Combine_out0>, TextOutputStream<TextOutputStreamTraitsConst<',', '\0', false, false, true, false, true, UTF8, true, CharFormat_uint16>, CosmosOutput>, false> OutputerType3_SV3_Combine;
        // Construct operator and initialize it
        unique_ptr<OutputerType3_SV3_Combine> outputer_SV3_Combine_out0_ptr(new OutputerType3_SV3_Combine(filterTransformer_Process_12, outputs[0].outputFileName, false, x_outputBufSize, x_outputBufCnt, OutputStreamParameters(',', "\r\n", '\0', static_cast<const char*>(__nullptr), false, false, true, false, "O", UTF8, true, CharFormat_uint16), UID_SV3_Combine_out0));
        OutputerType3_SV3_Combine * outputer_SV3_Combine_out0 = outputer_SV3_Combine_out0_ptr.get();
        try
        {
            // Init operator chain
            outputer_SV3_Combine_out0->Init();

            // Execute the whole vertex by calling the GetNextRow on top operator
            Process_12_Data0 row;
            outputer_SV3_Combine_out0->GetNextRow(row);
    
            // Close operator chain
            outputer_SV3_Combine_out0->Close();
        }
        catch (const ExceptionWithStack& ex)
        {
            if (vertexExecutionInfo->m_reportStatusFunc != NULL)
            {
                ErrorManager::GetGlobal()->SetError(std::current_exception(), "VertexExecute");
                vertexExecutionInfo->m_reportStatusFunc(vertexExecutionInfo->m_statusReportContext);
            }
            
            std::cout << "Caught exception: " << ex.what() << std::endl << ex.GetStack() << std::endl;
            throw;
        }


        // Write out execution stats
        MemoryManager::GetGlobal()->WriteRuntimeStats(vertexExecutionInfo->m_statsRoot);
        outputer_SV3_Combine_out0->WriteRuntimeStats(vertexExecutionInfo->m_statsRoot);
    }
}
#endif // defined(COMPILE_NATIVE)

#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.



#endif
#pragma endregion SV3_Combine
// Empty footer
