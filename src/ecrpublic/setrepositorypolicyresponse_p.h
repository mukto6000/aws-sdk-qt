// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETREPOSITORYPOLICYRESPONSE_P_H
#define QTAWS_SETREPOSITORYPOLICYRESPONSE_P_H

#include "ecrpublicresponse_p.h"

namespace QtAws {
namespace EcrPublic {

class SetRepositoryPolicyResponse;

class SetRepositoryPolicyResponsePrivate : public EcrPublicResponsePrivate {

public:

    explicit SetRepositoryPolicyResponsePrivate(SetRepositoryPolicyResponse * const q);

    void parseSetRepositoryPolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SetRepositoryPolicyResponse)
    Q_DISABLE_COPY(SetRepositoryPolicyResponsePrivate)

};

} // namespace EcrPublic
} // namespace QtAws

#endif
