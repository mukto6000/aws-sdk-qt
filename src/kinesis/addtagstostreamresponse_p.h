// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDTAGSTOSTREAMRESPONSE_P_H
#define QTAWS_ADDTAGSTOSTREAMRESPONSE_P_H

#include "kinesisresponse_p.h"

namespace QtAws {
namespace Kinesis {

class AddTagsToStreamResponse;

class AddTagsToStreamResponsePrivate : public KinesisResponsePrivate {

public:

    explicit AddTagsToStreamResponsePrivate(AddTagsToStreamResponse * const q);

    void parseAddTagsToStreamResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AddTagsToStreamResponse)
    Q_DISABLE_COPY(AddTagsToStreamResponsePrivate)

};

} // namespace Kinesis
} // namespace QtAws

#endif
