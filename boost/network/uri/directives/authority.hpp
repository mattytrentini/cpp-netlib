#ifndef __BOOST_NETWORK_URI_DIRECTIVES_AUTHORITY_INC__
# define __BOOST_NETWORK_URI_DIRECTIVES_AUTHORITY_INC__


namespace boost {
namespace network {
namespace uri {
struct authority_directive {

    explicit authority_directive(const std::string &authority)
        : authority(authority)
    {}

    void operator () (uri &uri_) const {
        uri_.append(authority);
    }

    std::string authority;

};

inline
authority_directive authority(const std::string &authority) {
    return authority_directive(authority);
}
} // namespace uri
} // namespace network
} // namespace boost


#endif // __BOOST_NETWORK_URI_DIRECTIVES_AUTHORITY_INC__