// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTRUSTSTORESRESPONSE_P_H
#define QTAWS_LISTTRUSTSTORESRESPONSE_P_H

#include "workspaceswebresponse_p.h"

namespace QtAws {
namespace WorkSpacesWeb {

class ListTrustStoresResponse;

class ListTrustStoresResponsePrivate : public WorkSpacesWebResponsePrivate {

public:

    explicit ListTrustStoresResponsePrivate(ListTrustStoresResponse * const q);

    void parseListTrustStoresResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListTrustStoresResponse)
    Q_DISABLE_COPY(ListTrustStoresResponsePrivate)

};

} // namespace WorkSpacesWeb
} // namespace QtAws

#endif
