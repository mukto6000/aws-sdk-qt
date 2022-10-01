// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEENDPOINTACCESSRESPONSE_P_H
#define QTAWS_DELETEENDPOINTACCESSRESPONSE_P_H

#include "redshiftresponse_p.h"

namespace QtAws {
namespace Redshift {

class DeleteEndpointAccessResponse;

class DeleteEndpointAccessResponsePrivate : public RedshiftResponsePrivate {

public:

    explicit DeleteEndpointAccessResponsePrivate(DeleteEndpointAccessResponse * const q);

    void parseDeleteEndpointAccessResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteEndpointAccessResponse)
    Q_DISABLE_COPY(DeleteEndpointAccessResponsePrivate)

};

} // namespace Redshift
} // namespace QtAws

#endif
