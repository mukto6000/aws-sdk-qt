// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTARTIFACTSREQUEST_P_H
#define QTAWS_LISTARTIFACTSREQUEST_P_H

#include "amplifyrequest_p.h"
#include "listartifactsrequest.h"

namespace QtAws {
namespace Amplify {

class ListArtifactsRequest;

class ListArtifactsRequestPrivate : public AmplifyRequestPrivate {

public:
    ListArtifactsRequestPrivate(const AmplifyRequest::Action action,
                                   ListArtifactsRequest * const q);
    ListArtifactsRequestPrivate(const ListArtifactsRequestPrivate &other,
                                   ListArtifactsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListArtifactsRequest)

};

} // namespace Amplify
} // namespace QtAws

#endif
