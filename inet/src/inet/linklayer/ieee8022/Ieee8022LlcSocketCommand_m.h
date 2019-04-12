//
// Generated file, do not edit! Created by nedtool 5.4 from inet/linklayer/ieee8022/Ieee8022LlcSocketCommand.msg.
//

#if defined(__clang__)
#  pragma clang diagnostic ignored "-Wreserved-id-macro"
#endif
#ifndef __INET_IEEE8022LLCSOCKETCOMMAND_M_H
#define __INET_IEEE8022LLCSOCKETCOMMAND_M_H

#include <omnetpp.h>

// nedtool version check
#define MSGC_VERSION 0x0504
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of nedtool: 'make clean' should help.
#endif

// dll export symbol
#ifndef INET_API
#  if defined(INET_EXPORT)
#    define INET_API  OPP_DLLEXPORT
#  elif defined(INET_IMPORT)
#    define INET_API  OPP_DLLIMPORT
#  else
#    define INET_API
#  endif
#endif


namespace inet {

class Ieee8022LlcSocketCommand;
class Ieee8022LlcSocketOpenCommand;
class Ieee8022LlcSocketCloseCommand;
class Ieee8022LlcSocketDestroyCommand;
class Ieee8022LlcSocketClosedIndication;
} // namespace inet

#include "inet/common/INETDefs_m.h" // import inet.common.INETDefs


namespace inet {

/**
 * Enum generated from <tt>inet/linklayer/ieee8022/Ieee8022LlcSocketCommand.msg:23</tt> by nedtool.
 * <pre>
 * enum Ieee8022LlcSocketCommandCode
 * {
 *     IEEE8022_LLC_C_OPEN = 1;
 *     IEEE8022_LLC_C_CLOSE = 2;
 *     IEEE8022_LLC_C_DESTROY = 3;
 *     IEEE8022_LLC_C_DATA = 4;
 * }
 * </pre>
 */
enum Ieee8022LlcSocketCommandCode {
    IEEE8022_LLC_C_OPEN = 1,
    IEEE8022_LLC_C_CLOSE = 2,
    IEEE8022_LLC_C_DESTROY = 3,
    IEEE8022_LLC_C_DATA = 4
};

/**
 * Enum generated from <tt>inet/linklayer/ieee8022/Ieee8022LlcSocketCommand.msg:31</tt> by nedtool.
 * <pre>
 * enum Ieee8022LlcSocketIndicationCode
 * {
 *     IEEE8022_LLC_I_SOCKET_CLOSED = 2;
 *     IEEE8022_LLC_I_DATA = 4;
 * }
 * </pre>
 */
enum Ieee8022LlcSocketIndicationCode {
    IEEE8022_LLC_I_SOCKET_CLOSED = 2,
    IEEE8022_LLC_I_DATA = 4
};

/**
 * Class generated from <tt>inet/linklayer/ieee8022/Ieee8022LlcSocketCommand.msg:37</tt> by nedtool.
 * <pre>
 * class Ieee8022LlcSocketCommand extends cObject
 * {
 * }
 * </pre>
 */
class INET_API Ieee8022LlcSocketCommand : public ::omnetpp::cObject
{
  protected:

  private:
    void copy(const Ieee8022LlcSocketCommand& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const Ieee8022LlcSocketCommand&);

  public:
    Ieee8022LlcSocketCommand();
    Ieee8022LlcSocketCommand(const Ieee8022LlcSocketCommand& other);
    virtual ~Ieee8022LlcSocketCommand();
    Ieee8022LlcSocketCommand& operator=(const Ieee8022LlcSocketCommand& other);
    virtual Ieee8022LlcSocketCommand *dup() const override {return new Ieee8022LlcSocketCommand(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const Ieee8022LlcSocketCommand& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, Ieee8022LlcSocketCommand& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inet/linklayer/ieee8022/Ieee8022LlcSocketCommand.msg:41</tt> by nedtool.
 * <pre>
 * class Ieee8022LlcSocketOpenCommand extends Ieee8022LlcSocketCommand
 * {
 *     int localSap;
 * }
 * </pre>
 */
class INET_API Ieee8022LlcSocketOpenCommand : public ::inet::Ieee8022LlcSocketCommand
{
  protected:
    int localSap = 0;

  private:
    void copy(const Ieee8022LlcSocketOpenCommand& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const Ieee8022LlcSocketOpenCommand&);

  public:
    Ieee8022LlcSocketOpenCommand();
    Ieee8022LlcSocketOpenCommand(const Ieee8022LlcSocketOpenCommand& other);
    virtual ~Ieee8022LlcSocketOpenCommand();
    Ieee8022LlcSocketOpenCommand& operator=(const Ieee8022LlcSocketOpenCommand& other);
    virtual Ieee8022LlcSocketOpenCommand *dup() const override {return new Ieee8022LlcSocketOpenCommand(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual int getLocalSap() const;
    virtual void setLocalSap(int localSap);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const Ieee8022LlcSocketOpenCommand& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, Ieee8022LlcSocketOpenCommand& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inet/linklayer/ieee8022/Ieee8022LlcSocketCommand.msg:46</tt> by nedtool.
 * <pre>
 * class Ieee8022LlcSocketCloseCommand extends Ieee8022LlcSocketCommand
 * {
 * }
 * </pre>
 */
class INET_API Ieee8022LlcSocketCloseCommand : public ::inet::Ieee8022LlcSocketCommand
{
  protected:

  private:
    void copy(const Ieee8022LlcSocketCloseCommand& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const Ieee8022LlcSocketCloseCommand&);

  public:
    Ieee8022LlcSocketCloseCommand();
    Ieee8022LlcSocketCloseCommand(const Ieee8022LlcSocketCloseCommand& other);
    virtual ~Ieee8022LlcSocketCloseCommand();
    Ieee8022LlcSocketCloseCommand& operator=(const Ieee8022LlcSocketCloseCommand& other);
    virtual Ieee8022LlcSocketCloseCommand *dup() const override {return new Ieee8022LlcSocketCloseCommand(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const Ieee8022LlcSocketCloseCommand& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, Ieee8022LlcSocketCloseCommand& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inet/linklayer/ieee8022/Ieee8022LlcSocketCommand.msg:50</tt> by nedtool.
 * <pre>
 * class Ieee8022LlcSocketDestroyCommand extends Ieee8022LlcSocketCommand
 * {
 * }
 * </pre>
 */
class INET_API Ieee8022LlcSocketDestroyCommand : public ::inet::Ieee8022LlcSocketCommand
{
  protected:

  private:
    void copy(const Ieee8022LlcSocketDestroyCommand& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const Ieee8022LlcSocketDestroyCommand&);

  public:
    Ieee8022LlcSocketDestroyCommand();
    Ieee8022LlcSocketDestroyCommand(const Ieee8022LlcSocketDestroyCommand& other);
    virtual ~Ieee8022LlcSocketDestroyCommand();
    Ieee8022LlcSocketDestroyCommand& operator=(const Ieee8022LlcSocketDestroyCommand& other);
    virtual Ieee8022LlcSocketDestroyCommand *dup() const override {return new Ieee8022LlcSocketDestroyCommand(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const Ieee8022LlcSocketDestroyCommand& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, Ieee8022LlcSocketDestroyCommand& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inet/linklayer/ieee8022/Ieee8022LlcSocketCommand.msg:54</tt> by nedtool.
 * <pre>
 * class Ieee8022LlcSocketClosedIndication extends Ieee8022LlcSocketCommand
 * {
 * }
 * </pre>
 */
class INET_API Ieee8022LlcSocketClosedIndication : public ::inet::Ieee8022LlcSocketCommand
{
  protected:

  private:
    void copy(const Ieee8022LlcSocketClosedIndication& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const Ieee8022LlcSocketClosedIndication&);

  public:
    Ieee8022LlcSocketClosedIndication();
    Ieee8022LlcSocketClosedIndication(const Ieee8022LlcSocketClosedIndication& other);
    virtual ~Ieee8022LlcSocketClosedIndication();
    Ieee8022LlcSocketClosedIndication& operator=(const Ieee8022LlcSocketClosedIndication& other);
    virtual Ieee8022LlcSocketClosedIndication *dup() const override {return new Ieee8022LlcSocketClosedIndication(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const Ieee8022LlcSocketClosedIndication& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, Ieee8022LlcSocketClosedIndication& obj) {obj.parsimUnpack(b);}

} // namespace inet

#endif // ifndef __INET_IEEE8022LLCSOCKETCOMMAND_M_H

