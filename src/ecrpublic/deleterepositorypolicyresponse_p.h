// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEREPOSITORYPOLICYRESPONSE_P_H
#define QTAWS_DELETEREPOSITORYPOLICYRESPONSE_P_H

#include "ecrpublicresponse_p.h"

namespace QtAws {
namespace EcrPublic {

class DeleteRepositoryPolicyResponse;

class DeleteRepositoryPolicyResponsePrivate : public EcrPublicResponsePrivate {

public:

    explicit DeleteRepositoryPolicyResponsePrivate(DeleteRepositoryPolicyResponse * const q);

    void parseDeleteRepositoryPolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteRepositoryPolicyResponse)
    Q_DISABLE_COPY(DeleteRepositoryPolicyResponsePrivate)

};

} // namespace EcrPublic
} // namespace QtAws

#endif
