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
UID_SV1_Extract_out0 = 3,
UID_ParallelUnionAll_Extract_0
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

#endif // defined(COMPILE_MANAGED)


//}

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
    INLINE Extract_0_Data0::Extract_0_Data0(const Extract_0_Data0 & c, IncrementalAllocator * alloc) :
            m_Title(c.m_Title, alloc),
            m_ReleaseDate(c.m_ReleaseDate),
            m_VideoReleaseDate(c.m_VideoReleaseDate),
            m_IMDbURL(c.m_IMDbURL, alloc)
    {
        m_MovieId = c.m_MovieId;
        m_GenreUnknown = c.m_GenreUnknown;
        m_GenreAction = c.m_GenreAction;
        m_GenreAdventure = c.m_GenreAdventure;
        m_GenreAnimation = c.m_GenreAnimation;
        m_GenreChildrens = c.m_GenreChildrens;
        m_GenreComedy = c.m_GenreComedy;
        m_GenreCrime = c.m_GenreCrime;
        m_GenreDocumentary = c.m_GenreDocumentary;
        m_GenreDrama = c.m_GenreDrama;
        m_GenreFantasy = c.m_GenreFantasy;
        m_GenreNoire = c.m_GenreNoire;
        m_GenreHorror = c.m_GenreHorror;
        m_GenreMusical = c.m_GenreMusical;
        m_GenreMystery = c.m_GenreMystery;
        m_GenreRomance = c.m_GenreRomance;
        m_GenreSciFi = c.m_GenreSciFi;
        m_GenreThriller = c.m_GenreThriller;
        m_GenreWar = c.m_GenreWar;
        m_GenreWestern = c.m_GenreWestern;
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

    template<> 
    class TextOutputPolicy<Extract_0_Data0, UID_SV1_Extract_out0>
    {
    public:

        static void Serialize(TextOutputStream<TextOutputStreamTraitsConst<',', '\0', false, false, true, false, true, UTF8, true, CharFormat_uint16>, CosmosOutput> * output, Extract_0_Data0 & row)
        {
            output->Write<int,false>(row.m_MovieId);
            output->WriteDelimiter();
            if (!row.m_Title.IsNull())
            {
                output->Write<FString,true>(row.m_Title);
            }
            output->WriteDelimiter();
            output->Write<ScopeDateTime,false>(row.m_ReleaseDate);
            output->WriteDelimiter();
            if (!row.m_VideoReleaseDate.IsNull())
            {
                output->Write<ScopeDateTime,false>(row.m_VideoReleaseDate);
            }
            output->WriteDelimiter();
            if (!row.m_IMDbURL.IsNull())
            {
                output->Write<FString,true>(row.m_IMDbURL);
            }
            output->WriteDelimiter();
            output->Write<bool,false>(row.m_GenreUnknown);
            output->WriteDelimiter();
            output->Write<bool,false>(row.m_GenreAction);
            output->WriteDelimiter();
            output->Write<bool,false>(row.m_GenreAdventure);
            output->WriteDelimiter();
            output->Write<bool,false>(row.m_GenreAnimation);
            output->WriteDelimiter();
            output->Write<bool,false>(row.m_GenreChildrens);
            output->WriteDelimiter();
            output->Write<bool,false>(row.m_GenreComedy);
            output->WriteDelimiter();
            output->Write<bool,false>(row.m_GenreCrime);
            output->WriteDelimiter();
            output->Write<bool,false>(row.m_GenreDocumentary);
            output->WriteDelimiter();
            output->Write<bool,false>(row.m_GenreDrama);
            output->WriteDelimiter();
            output->Write<bool,false>(row.m_GenreFantasy);
            output->WriteDelimiter();
            output->Write<bool,false>(row.m_GenreNoire);
            output->WriteDelimiter();
            output->Write<bool,false>(row.m_GenreHorror);
            output->WriteDelimiter();
            output->Write<bool,false>(row.m_GenreMusical);
            output->WriteDelimiter();
            output->Write<bool,false>(row.m_GenreMystery);
            output->WriteDelimiter();
            output->Write<bool,false>(row.m_GenreRomance);
            output->WriteDelimiter();
            output->Write<bool,false>(row.m_GenreSciFi);
            output->WriteDelimiter();
            output->Write<bool,false>(row.m_GenreThriller);
            output->WriteDelimiter();
            output->Write<bool,false>(row.m_GenreWar);
            output->WriteDelimiter();
            output->Write<bool,false>(row.m_GenreWestern);
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
        // Merge streams N->1
        typedef ParallelUnionAll<ExtractorType1_SV1_Extract, Extract_0_Data0, IsNativeOnlyVertex> UnionAllType_Extract_0_SV1_Extract_out0_connector;
        unique_ptr<UnionAllType_Extract_0_SV1_Extract_out0_connector> unionall_Extract_0_SV1_Extract_out0_connector_ptr(new UnionAllType_Extract_0_SV1_Extract_out0_connector(extractor_0,extractor_0_count,false,UID_ParallelUnionAll_Extract_0));
        UnionAllType_Extract_0_SV1_Extract_out0_connector * unionall_Extract_0_SV1_Extract_out0_connector = unionall_Extract_0_SV1_Extract_out0_connector_ptr.get();
        ULONG unionall_Extract_0_SV1_Extract_out0_connector_count = 1;
        // Define outputer type
        typedef Outputer<UnionAllType_Extract_0_SV1_Extract_out0_connector, Extract_0_Data0, TextOutputPolicy<Extract_0_Data0, UID_SV1_Extract_out0>, TextOutputStream<TextOutputStreamTraitsConst<',', '\0', false, false, true, false, true, UTF8, true, CharFormat_uint16>, CosmosOutput>, false> OutputerType2_SV1_Extract;
        // Construct operator and initialize it
        unique_ptr<OutputerType2_SV1_Extract> outputer_SV1_Extract_out0_ptr(new OutputerType2_SV1_Extract(unionall_Extract_0_SV1_Extract_out0_connector, outputs[0].outputFileName, false, x_outputBufSize, x_outputBufCnt, OutputStreamParameters(',', "\r\n", '\0', static_cast<const char*>(__nullptr), false, false, true, false, "O", UTF8, true, CharFormat_uint16), UID_SV1_Extract_out0));
        OutputerType2_SV1_Extract * outputer_SV1_Extract_out0 = outputer_SV1_Extract_out0_ptr.get();
        try
        {
            // Init operator chain
            outputer_SV1_Extract_out0->Init();

            // Execute the whole vertex by calling the GetNextRow on top operator
            Extract_0_Data0 row;
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
// Empty footer
