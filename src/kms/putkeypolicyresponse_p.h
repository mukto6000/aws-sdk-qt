// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTKEYPOLICYRESPONSE_P_H
#define QTAWS_PUTKEYPOLICYRESPONSE_P_H

#include "kmsresponse_p.h"

namespace QtAws {
namespace Kms {

class PutKeyPolicyResponse;

class PutKeyPolicyResponsePrivate : public KmsResponsePrivate {

public:

    explicit PutKeyPolicyResponsePrivate(PutKeyPolicyResponse * const q);

    void parsePutKeyPolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutKeyPolicyResponse)
    Q_DISABLE_COPY(PutKeyPolicyResponsePrivate)

};

} // namespace Kms
} // namespace QtAws

#endif
