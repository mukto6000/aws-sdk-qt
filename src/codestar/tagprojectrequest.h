// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TAGPROJECTREQUEST_H
#define QTAWS_TAGPROJECTREQUEST_H

#include "codestarrequest.h"

namespace QtAws {
namespace CodeStar {

class TagProjectRequestPrivate;

class QTAWSCODESTAR_EXPORT TagProjectRequest : public CodeStarRequest {

public:
    TagProjectRequest(const TagProjectRequest &other);
    TagProjectRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(TagProjectRequest)

};

} // namespace CodeStar
} // namespace QtAws

#endif
