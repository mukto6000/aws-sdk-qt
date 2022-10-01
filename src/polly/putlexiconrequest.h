// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTLEXICONREQUEST_H
#define QTAWS_PUTLEXICONREQUEST_H

#include "pollyrequest.h"

namespace QtAws {
namespace Polly {

class PutLexiconRequestPrivate;

class QTAWSPOLLY_EXPORT PutLexiconRequest : public PollyRequest {

public:
    PutLexiconRequest(const PutLexiconRequest &other);
    PutLexiconRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutLexiconRequest)

};

} // namespace Polly
} // namespace QtAws

#endif
